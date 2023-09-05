/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:11:01 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/05 18:07:04 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

/*
//swap
int main()
{
    // テスト用のコード
    t_node *stack = NULL;

    // スタックにノードを追加
    t_node node1 = {1, NULL};
    t_node node2 = {2, NULL};
    t_node node3 = {3, NULL};
    stack = &node1;
    node1.next = &node2;
    node2.next = &node3;

    // ノードの交換
    swap(&stack);

    // 結果の表示
    t_node *current = stack;
    while (current != NULL)
    {
        printf("%d ", current->content);
        current = current->next;
    }

    return 0;
}
*/
//push
int main()
{
    // テスト用のコード
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;

    // スタックAにノードを追加
    t_node node1 = {1, NULL};
    t_node node2 = {2, NULL};
    t_node node3 = {3, NULL};
    stack_a = &node1;
    node1.next = &node2;
    node2.next = &node3;

    // スタックBに要素をプッシュ
    push(&stack_a, &stack_b);

    // スタックBの内容を表示
    t_node *current = stack_b;
    while (current != NULL)
    {
        printf("%d ", current->content);
        current = current->next;
    }

    return 0;
}

