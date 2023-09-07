/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:57:04 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/07 18:27:53 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void swap(t_list **stack)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        // リストが空または1つのノードしかない場合、何もしない
        return;
    }

    t_list *old_head = *stack;          // 現在のヘッド
    t_list *new_head = old_head->next;  // 新しいヘッド

    // リストのヘッドを交換
    old_head->next = new_head->next;
    new_head->next = old_head;

    // スタックの新しいヘッドに設定
    *stack = new_head;
}

void	sa(t_list **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", STDOUT_FILENO);
}

void	sb(t_list **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", STDOUT_FILENO);
}

