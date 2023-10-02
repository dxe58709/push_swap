/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:19:08 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/02 17:23:33 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// リストを分割してソートする関数
t_node	*partition(t_node *head, t_node **pivot)
{
	t_node	*pivot_node;
	t_node	*current;
	t_node	*next;

	pivot_node = head;// ピボットノードをリストの先頭に設定
	*pivot = head;// ピボットノードへのポインタを初期化
	current = head->next;
	while (current != head)
	{
		next = current->next;
		if (current->data < pivot_node->data)
		{// ピボットより小さいノードはリストの先頭に移動
			current->next = *pivot;
			*pivot = current;
		}
		else// ピボットより大きいノードは適切な位置に挿入
		{
			pivot_node->next = current;
			pivot_node = current;
		}
		current = next;
	}
	pivot_node->next = *pivot;// 分割が完了し、ピボットノードが中心になるように調整
	return (pivot_node);// 新たなピボットノードを返す
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
		pivot_node->next = quick_sort(pivot->next);// 右側の部分リストを再帰的にソート
	}
	head = quick_sort(head);// 左側の部分リストを再帰的にソート
	pivot = head;
	while (pivot->next != NULL)
		pivot = pivot->next;
	pivot->next = head;// 左右のソート済みリストを連結
	return (pivot_node);// ソート済み部分リストの新たなピボットノードを返す
}

// リストを表示する関数
void print_list(t_node *head) {
    t_node *current = head;
    do {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);
    printf("\n");
}

// int main()
// {
//     t_stack stack;
//     stack.head = NULL;
//     stack.end = NULL;
//     stack.current = 0;
//     stack.max = 0;

//     // ソート対象のデータを t_stack に追加
//     int data1 = 3;
//     int data2 = 1;
//     int data3 = 2;
//     int data4 = 5;
//     int data5 = 4;

//     // データを t_stack に追加
//     push(&(stack.head), &(stack.current), data1);
//     push(&(stack.head), &(stack.current), data2);
//     push(&(stack.head), &(stack.current), data3);
//     push(&(stack.head), &(stack.current), data4);
//     push(&(stack.head), &(stack.current), data5);

//     // クイックソートを実行
//     stack.head = quick_sort(stack.head);

//     // ソート後のリストを表示
//     print_list(stack.head);

//     return 0;
// }
