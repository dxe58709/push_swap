/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:26:16 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/18 15:32:07 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack *stack_a)
{
	t_stack	*stack_b;

	stack_b = create_stack();
	while (!(stack_a->head->data == 3 || stack_a->head->data == 4))
		ra(stack_a);
	pb(stack_a, stack_b);
	while (!(stack_a->head->data == 3 || stack_a->head->data == 4))
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	if (stack_b->head > stack_b->head->prev)
		rb(stack_b);
	while (stack_b->head)
		pa(stack_a, stack_b);
	ra(stack_a);
	ra(stack_a);
	while (stack_a->head)
	{
		ft_printf("node %d\n", stack_a->head->data);
		stack_a->head = stack_a->head->prev;
	}
}

/*
int	search_two(t_stack *stack, int *data)
{
	t_node	*tmp;
	int		count;
	int		flag;

	tmp = stack->head;
	count = 0;
	flag = -1;
	while (tmp)
	{
		count++;
		if (tmp->data == data[0] || tmp->data == data[1])
		{
			return (count);
		}
		tmp = tmp->prev;
	}
	return (flag);
}

void	ra_or_rra(t_stack *stack, int *data)
{
	if (search_two(stack, data) > (stack->current / 2))
	{
		while (!(stack->head->data == data[0] || stack->head->data == data[1]))
			rra(stack);
	}
	else
	{
		while (!(stack->head->data == data[0] || stack->head->data == data[1]))
			ra(stack);
	}
}

void	sort_five(t_stack *stack_a)
{
	t_stack	*stack_b;
	int		data[2];

	stack_b = create_stack();
	data[0] = 0;
	data[1] = 1;
	ra_or_rra(stack_a, data);
	pb(stack_a, stack_b);
	ra_or_rra(stack_a, data);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	if (stack_b->head->data == 0)
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	// while (stack_a->head)
	// {
	// 	ft_printf("node %d\n", stack_a->head->data);
	// 	stack_a->head = stack_a->head->prev;
	// }
}
*/
