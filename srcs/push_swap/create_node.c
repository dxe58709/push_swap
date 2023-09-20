/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:58:51 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/20 17:25:33 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

// 新しいノードを作成する関数
t_node	*create_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

// 循環リストにノードを追加する関数
void	append_node(t_node *list, int data)
{
	t_node	*new_node;
	t_node	*current;

	new_node = create_node(data);
	if (list->head == NULL)
	{
		list->head = new_node;
		new_node->next = new_node;// リストを循環させる
	}
	else
	{
		current = list->head;
		while (current->next != list->head)
			current = current->next;
		current->next = new_node;
		new_node->next = list->head;
	}
}

// 循環リストの内容を表示する関数
void	display_list(t_node *list)
{
	t_node	*current;

	// リストが空の場合、メッセージを表示して関数を終了
	if (list->head == NULL)
	{
		printf("List is empty.\n");
		return ;
	}
	current = list->head;// 現在のノードをリストの先頭に設定
	while (current != NULL)// ループを使用してリスト内の要素を表示
	{
		printf("%d -> ", current->data);// 現在のノードのデータを表示
		current = current->next;
		if (current == list->head)// リストを一周した場合、ループを終了
			break ;
	}
	printf("\n");
}

/*
int main()
{
	struct cyclist	list;

	list.head = NULL;

	append_node(&list, 1);
	append_node(&list, 2);
	append_node(&list, 3);

	printf("Circular Linked List: ");
	display_list(&list);

	return 0;
}
*/
