/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:50:37 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/14 13:23:13 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include "push_swap.h"

#define STACK_SIZE 100  // スタックの最大サイズ

// スタックの定義
typedef struct {
    int data[STACK_SIZE];
    int top;
} Stack;

// スタックの初期化
void initializeStack(Stack *stack) {
    stack->top = -1;
}

// スタックに要素をプッシュ
void push(Stack *stack, int value) {
    if (stack->top < STACK_SIZE - 1) {
        stack->data[++stack->top] = value;
    }
}

// スタックから要素をポップ
int pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top--];
    }
    return -1;  // エラー値
}

// スタックのトップ要素を取得
int peek(const Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[stack->top];
    }
    return -1;  // エラー値
}

int main() {
    Stack stackA, stackB;
    initializeStack(&stackA);
    initializeStack(&stackB);

    char instruction[4];  // "pa", "pb", "sa", などの操作を格納するバッファ

    while (scanf("%s", instruction) == 1) {
        // 読み取った操作を実行
        if (strcmp(instruction, "pa") == 0) {
            int value = pop(&stackB);
            if (value != -1) {
                push(&stackA, value);
            }
        } else if (strcmp(instruction, "pb") == 0) {
            int value = pop(&stackA);
            if (value != -1) {
                push(&stackB, value);
            }
        } else if (strcmp(instruction, "sa") == 0) {
            int topA = pop(&stackA);
            int topB = pop(&stackA);
            push(&stackA, topA);
            push(&stackA, topB);
        }
        // 他の操作についても同様に処理を追加

        // デバッグ用：現在のスタックの状態を表示
        printf("Stack A: ");
        for (int i = 0; i <= stackA.top; i++) {
            printf("%d ", stackA.data[i]);
        }
        printf("\n");

        printf("Stack B: ");
        for (int i = 0; i <= stackB.top; i++) {
            printf("%d ", stackB.data[i]);
        }
        printf("\n");
    }

    return 0;
}
*/
