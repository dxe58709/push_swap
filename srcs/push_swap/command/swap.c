/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:57:04 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/03 13:58:00 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

void	swap(t_stack *stack)
{
	int		tmp;

	if (stack->head && stack->head->prev)
	{
		tmp = stack->head->data;
		stack->head->data = stack->head->prev->data;
		stack->head->prev->data = tmp;
	}
}

void	sa(t_stack *stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", STDOUT_FILENO);
}

void	sb(t_stack *stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", STDOUT_FILENO);
}
