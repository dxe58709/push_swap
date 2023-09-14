/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:17 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/14 17:33:16 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first > second && first < third && second < third)
		sa(stack_a);
	if (first > second && first > third && second < third)
		ra(stack_a);
	if (first < second && first > third && second > third)
		rra(stack_a);
	if (first > second && first > third && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	if (first < second && first < third && second > third)
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	ft_sort(t_node **stack_a, t_node **stack_b)
{
	int	argc;

	argc = 0;
	if (argc == 2)
		sa(stack_a);
	else if (argc == 3)
		sort_three(stack_a);
//	else if (argc > 3)
//		quick_sort(stack_a, stack_b);
//	else
//		radix_sort(stack_a, stack_b, a_size);
	return ;
}


int	main()
{
	t_node	**stack_a = NULL;
	t_node	**stack_b = NULL;


	ft_sort(stack_a, stack_b);

	return (0);
}

