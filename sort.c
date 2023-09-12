/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:19:08 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/12 19:46:19 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// リストを分割してソートする関数
t_node	*partition(t_node *head, t_node **pivot)
{
	t_node	*pivot_node;
	t_node	*current;
	t_node	*next;

	pivot_node = head;
	*pivot = head;
	current = head->next;
	while (current != head)
	{
		next = current->next;
		if (current->data < pivot_node->data)
		{
			current->next = *pivot;
			*pivot = current;
		}
		else
		{
			pivot_node->next = current;
			pivot_node = current;
		}
		current = next;
	}
	pivot_node->next = *pivot;
	return (pivot_node);
}

// クイックソートを実行する関数
t_node	*quick_sort(t_node *head)
{
	t_node	*pivot;
	t_node	*pivot_node;
	t_node	*temp;

	if (head == NULL || head->next == head)//リストが空または要素が1つ以下の場合、ソートの必要なし
		return (head);
	pivot = NULL;
	pivot_node = partition(head, &pivot);//リストを分割し、新たなピボットノードを取得
	if (pivot->next != pivot)
	{
		temp = pivot->next;
		pivot->next = temp->next;
		temp->next = NULL;
		pivot_node->next = quick_sort(pivot->next);
	}
	head = quick_sort(head);
	pivot = head;
	while (pivot->next != NULL)
		pivot = pivot->next;
	pivot->next = head;
	return (pivot_node);
}
