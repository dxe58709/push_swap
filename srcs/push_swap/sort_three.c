/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:17 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/14 14:51:25 by nsakanou         ###   ########.fr       */
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
