/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:03:33 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/02 18:31:11 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

void	rotate(t_stack *stack)
{
	t_node	*head;
	t_node	*end;

	if (stack == NULL || stack->head == NULL
		|| stack->head->next == NULL)// リストが空または1つのノードしかない場合、何もしない
		return ;

	head = stack->head;// 現在のヘッド
	end = stack->head;

	while (end->next != NULL)
		end = end->next;

// 新しいヘッドの位置を設定
	stack->head = head->next;
	end->next = head;
	head->next = NULL;
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
