/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/14 13:56:01 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	print_stack(void *nbr)
{
	printf("[%d]\n", *(int *)nbr);
}
	

int	main()
{
	t_node	*stack_a = NULL;
	//t_list	*stack_b = NULL;
	t_node	*stack_new;
	
	int	*i = malloc(sizeof(int *));
	*i = 1;
	stack_new = ft_lstnew(i);
	ft_lstadd_back(&stack_a, stack_new);
	
	int	*j = malloc(sizeof(int *));
	*j = 2;
	stack_new = ft_lstnew(j);
	ft_lstadd_back(&stack_a, stack_new);

	sa(&stack_a);
	ft_lstiter(stack_a, print_stack);
	ft_lstclear(&stack_a, free);
}
