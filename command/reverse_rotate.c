/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:07:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/05 16:09:40 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void reverse_rotate(t_node **stack)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        // リストが空または1つのノードしかない場合、何もしない
        return;
    }

    t_node *head = *stack;      // 現在のヘッド
    t_node *tail = *stack;      // 新しいヘッド
    t_node *sentinel = *stack;

    while (sentinel->next != NULL)
    {
        tail = sentinel;
        sentinel = sentinel->next;
    }

    // 新しいヘッドの位置を設定
    tail->next = NULL;
    sentinel->next = head;
    *stack = sentinel;
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_putstr_fd("rra\n", STDOUT_FILENO);
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_putstr_fd("rrb\n", STDOUT_FILENO);
}

