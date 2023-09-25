/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:54:31 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/25 15:52:07 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **src, t_node **dst)//src から dst に要素を移動する関数
{
	t_node	*new_dst_head;
	t_node	*src_sentinel;
	t_node	*dst_sentinel;

	if (*src == NULL || (*src)->next == NULL)
		return ;

	new_dst_head = *src;//src の新しい先頭ノード
	src_sentinel = *src;//src リストの最後の要素の次の要素を示す
	dst_sentinel = *dst;//dst リストの最後の要素の次の要素を示す

	while (src_sentinel->next->next != NULL)//src リストの最後のノードを見つける
	{
		src_sentinel = src_sentinel->next;
	}//ループを抜けると、src_sentinel は src リストの最後の要素を指す

	*src = src_sentinel->next;
	src_sentinel->next = NULL;

	new_dst_head->next = *dst;
	*dst = new_dst_head;
//src リストから最後の要素を切り離し、その要素を dst リストの先頭に追加
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", STDOUT_FILENO);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pb\n", STDOUT_FILENO);
}
