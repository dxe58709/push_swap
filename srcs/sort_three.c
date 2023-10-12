/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:17 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/03 16:18:57 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack_a)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	first = stack_a->head;
	second = first->prev;
	third = second->prev;
	while (!(first->data < second->data && second->data < third->data))
	{
		first = stack_a->head;
		second = first->prev;
		third = second->prev;
		if (first->data > second->data && first->data > third->data)
			ra(stack_a);
		if (first->data > second->data && first->data < third->data)
			sa(stack_a);
		else if (first->data < second->data && first->data > third->data)
			rra(stack_a);
		else if (first->data < second->data && first->data < third->data
			&& second->data > third->data)
			sa(stack_a);
		else if (first->data > second->data && first->data < third->data
			&& second->data < third->data)
			ra(stack_a);
	}
}	
