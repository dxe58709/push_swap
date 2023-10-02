/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:54:31 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/02 18:43:27 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack *src, t_stack *dst)//src から dst に要素を移動する関数
{
	t_node	*new_node;
	t_node	*src_last_node;
	int		data;

	data = src->head->data;
	if (src == NULL || src->current == NULL)// ソーススタックが空または要素が1つしかない場合
		return;
	new_node = ps_calloc(1, sizeof(t_node));// メモリ割り当て
	new_node->data = data;// ソーススタックの先頭のデータをコピー
	new_node->next = dst->head;//新しい要素を追加
	dst->head = new_node;//ポインタを新しい要素に更新
	dst->current++;
	src_last_node = src->head;

	if (src_last_node->next == NULL) // ソーススタックに1つの要素しかない場合
	{
		src->head = NULL;
		src->current = 0;
	}
	else
	{
		while (src_last_node->next->next != NULL)// 最後の要素を探す
			src_last_node = src_last_node->next;

		free(src_last_node->next);// 最後の要素を解放
		src_last_node->next = NULL;
		src->current--;
	}
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", STDOUT_FILENO);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pb\n", STDOUT_FILENO);
}
