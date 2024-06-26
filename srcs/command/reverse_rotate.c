/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:07:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/12 18:31:06 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

void	reverse_rotate(t_stack *stack)
{
	t_node	*tmp;

	if (stack->end && stack->end != stack->head)
	{
		tmp = stack->end;
		stack->end = stack->end->next;
		stack->end->prev = NULL;
		tmp->next = NULL;
		stack->head->next = tmp;
		tmp->prev = stack->head;
		stack->head = tmp;
	}
}

void	rra(t_stack *stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr_fd("rra\n", STDOUT_FILENO);
}

void	rrb(t_stack *stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr_fd("rrb\n", STDOUT_FILENO);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_putstr_fd("rrr\n", STDOUT_FILENO);
}
