/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:07:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/02 18:28:40 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h" 

void	reverse_rotate(t_stack *stack)
{
	t_node	*head;
	t_node	*end;
	t_node	*sentinel;

	if (stack == NULL || stack->head == NULL
		|| stack->head->next == NULL)// リストが空または1つのノードしかない場合、何もしない
		return ;

	head = stack->head;// 現在のヘッド
	end = stack->head;// 新しいヘッド
	sentinel = stack->head;

	while (sentinel->next != NULL)
	{
		end = sentinel;
		sentinel = sentinel->next;
	}

	// 新しいヘッドの位置を設定
	end->next = NULL;
	sentinel->next = head;
	stack->head = sentinel;
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
