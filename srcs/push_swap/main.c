/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/25 20:59:46 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		*temp3;

	//split 入れる
	//第二引数にsplitがくる ./a.out "1 3 5"
	// ./a.out "1 3 5" 7とかはerrorにしとく

	temp3 = coordinate_compression(argc, argv);
	stack_a = create_stack();
	stack_a->current = argc - 1;
	stack_a->max = argc - 1;

	printf("%d\n", temp3[0]);
	printf("%d\n", temp3[1]);
	printf("%d\n", temp3[2]);
	while (--argc)
		create_node(stack_a, temp3[argc - 1]);//後ろから入れてく
	free(temp3);
	while (stack_a->end)
	{
		printf("node %d\n", stack_a->end->data);
		stack_a->end = stack_a->end->next;
	}
	return (0);
}

/*
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
*/
