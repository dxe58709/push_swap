/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:57:04 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/14 15:47:06 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void	swap(t_node **stack)
{
	t_node	*old_head;
	t_node	*new_head;

	if (*stack == NULL || (*stack)->next == NULL) // リストが空または1つのノードしかない場合、何もしない
		return ;

	old_head = *stack;// 現在のヘッド
	new_head = old_head->next;// 新しいヘッド

    // リストのヘッドを交換
	old_head->next = new_head->next;
	new_head->next = old_head;

    // スタックの新しいヘッドに設定
	*stack = new_head;
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", STDOUT_FILENO);
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", STDOUT_FILENO);
}