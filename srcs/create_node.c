/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:58:51 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/05 15:52:40 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// ノードの構造体
struct Node {
    int data;
    struct Node *next;
};

// 循環リストの構造体
struct CircularLinkedList {
    struct Node *head;
};

// 新しいノードを作成する関数
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 循環リストにノードを追加する関数
void appendNode(struct CircularLinkedList *list, int data) {
    struct Node *newNode = createNode(data);
    if (list->head == NULL) {
        list->head = newNode;
        newNode->next = newNode;  // リストを循環させる
    } else {
        struct Node *current = list->head;
        while (current->next != list->head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = list->head;
    }
}

// 循環リストの内容を表示する関数
void displayList(struct CircularLinkedList *list) {
    if (list->head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node *current = list->head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != list->head);
    printf("\n");
}

int main() {
    struct CircularLinkedList list;
    list.head = NULL;

    appendNode(&list, 1);
    appendNode(&list, 2);
    appendNode(&list, 3);

    printf("Circular Linked List: ");
    displayList(&list);

    return 0;
}

