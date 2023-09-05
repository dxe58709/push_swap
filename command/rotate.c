/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:03:33 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/05 18:20:48 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

void rotate(t_node **stack)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        // リストが空または1つのノードしかない場合、何もしない
        return;
    }

    t_node *head = *stack;      // 現在のヘッド
//    t_node *sentinel = *stack;  // 新しいヘッド
    t_node *tail = *stack;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    // 新しいヘッドの位置を設定
    *stack = head->next;
    tail->next = head;
    head->next = NULL;
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", STDOUT_FILENO);
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", STDOUT_FILENO);
}

