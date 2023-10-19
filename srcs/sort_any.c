/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_any.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:19:08 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/19 20:41:00 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_one(t_stack *stack, int data)
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
		if (tmp->data == data)
		{
			return (count);
		}
		tmp = tmp->prev;
	}
	return (flag);
}

void	rb_or_rrb(t_stack *stack, int data)
{
	if (search_one(stack, data) > (stack->current / 2))
	{
		while (!(stack->head->data == data))
			rrb(stack);
	}
	else
	{
		while (!(stack->head->data == data))
			rb(stack);
	}
}

void	under_two(t_stack *stack_a)
{
	if (stack_a->current == 2
		&& stack_a->head->data > stack_a->head->prev->data)
		sa(stack_a);
	exit(0);
}

void	move_to_stack_b(t_stack *stack_a, t_stack *stack_b, int u_30, int u_10)
{
	while ((stack_a->max - stack_a->current) <= u_30)
	{
		if (stack_a->head->data <= u_30)
		{
			pb(stack_a, stack_b);
			if (stack_b->head->data <= u_10)
				rb(stack_b);
		}
		else
			ra(stack_a);
	}
}

void	sort_any(t_stack *stack_a)
{
	int		u_30;
	int		u_10;
	t_stack	*stack_b;

	if (stack_a->current <= 2)
		return (under_two(stack_a));
	stack_b = create_stack();
	stack_b->current = 0;
	while (stack_a->current > 3)
	{
		u_30 = (stack_a->current * 0.3) + stack_a->max - stack_a->current;
		u_10 = (stack_a->current * 0.1) + stack_a->max - stack_a->current;
		if (stack_a->current == 6)
			u_30 = 2 + stack_a->max - stack_a->current;
		if (stack_a->current == 4)
			u_30 = stack_a->max - stack_a->current;
		move_to_stack_b(stack_a, stack_b, u_30, u_10);
	}
	sort_three(stack_a);
	while (stack_a->current < stack_a->max)
	{
		rb_or_rrb(stack_b, stack_b->current - 1);
		pa(stack_a, stack_b);
	}
}
