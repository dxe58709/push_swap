/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:03:33 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/12 18:28:35 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

void	rotate(t_stack *stack)
{
	t_node	*tmp;

	if (stack->head && stack->head != stack->end)
	{
		tmp = stack->head;
		stack->head = stack->head->prev;
		stack->head->next = NULL;
		tmp->prev = NULL;
		stack->end->prev = tmp;
		tmp->next = stack->end;
		stack->end = tmp;
	}
}

void	ra(t_stack *stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", STDOUT_FILENO);
}

void	rb(t_stack *stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", STDOUT_FILENO);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", STDOUT_FILENO);
}

