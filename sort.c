#include <stdio.h>
#include <stdlib.h>

// 単方向循環リストのノードを表す構造体
struct node
{
    int data;
    struct node* next;
};

// 新しいノードを作成する関数
struct node* create_node(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

// 単方向循環リストを表示する関数
void printCircularList(struct node* head)
{
  struct node* current = head;
  while (current != NULL)
  {
    printf("%d ", current->data);
    current = current->next;
    if (current == head) {
        break; // リストを一巡したらループを終了
    }
  }
  printf("\n");
}

// リストを分割してソートする関数
struct node* partition(struct node* head, struct node** pivot)
{
    struct node* pivotNode = head;
    *pivot = head;
    struct node* current = head->next;
    
    while (current != head)
    {
        struct node* next = current->next;
        if (current->data < pivotNode->data)
        {
            current->next = *pivot;
            *pivot = current;
        }
        else
        {
            pivotNode->next = current;
            pivotNode = current;
        }
        current = next;
    }
    
    pivotNode->next = *pivot;
    return pivotNode;
}

// クイックソートを実行する関数
struct node* quick_sort(struct node* head) {
    if (head == NULL || head->next == head)
        return head;
    
    struct node* pivot = NULL;
    struct node* pivotNode = partition(head, &pivot);
    
    if (pivot->next != pivot)
    {
        struct node* temp = pivot->next;
        pivot->next = temp->next;
        temp->next = NULL;
        pivotNode->next = quick_sort(pivot->next);
    }

    head = quick_sort(head);
    pivot = head;
    while (pivot->next != NULL)
        pivot = pivot->next;
    pivot->next = head;
    
    return pivotNode;
}

int main() {
    // サンプルの単方向循環リストを作成
    struct Node* head = create_node(12);
    head->next = create_node(4);
    head->next->next = create_node(5);
    head->next->next->next = create_node(6);
    head->next->next->next->next = head; // リストを循環させる
    
    printf("ソート前の単方向循環リスト: ");
    printCircularList(head);
    
    head = quick_sort(head); // クイックソートを実行
    
    printf("ソート後の単方向循環リスト: ")
    printCircularList(head);
    
    return 0;
}
