/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:17 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/02 17:33:08 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->head->data;
	second = (*stack_a)->head->next->data;
	third = (*stack_a)->end->data;
	 // first が中央値で、first と second を交換 (sa(stack_a))
	if (first > second && first < third && second < third)
		sa(stack_a);
	// first が最大値で、最初の要素を最後に移動 (ra(stack_a))
	if (first > second && first > third && second < third)
		ra(stack_a);
	// first が中央値で、最初の要素を最後から最初に移動 (rra(stack_a))
	if (first < second && first > third && second > third)
		rra(stack_a);
	// first が最大値で、first と second を交換後に最初の要素を最後から最初に移動 (sa(stack_a), rra(stack_a))
	if (first > second && first > third && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	// first が最小値で、first と second を交換後に最初の要素を最後から最初に移動 (sa(stack_a), ra(stack_a))
	if (first < second && first < third && second > third)
	{
		sa(stack_a);
		ra(stack_a);
	}
}

/*
// プッシュ関数
void push1(t_node **stack, int data)
{
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    new_node->data = data;
    new_node->next = *stack;
    *stack = new_node;
}

// スタックの表示
void print_stack(t_node *stack)
{
    t_node *current = stack;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;

    if (argc < 2)
    {
        printf("Usage: %s <numbers to sort>\n", argv[0]);
        return 1;
    }

    // コマンドライン引数をスタックにプッシュ
    for (int i = 1; i < argc; i++)
    {
        push1(&stack_a, atoi(argv[i]));
    }

    printf("Original stack: ");
    print_stack(stack_a); // スタックの内容を表示

    sort_three(&stack_a); // スタックをソート

    printf("Sorted stack: ");
    print_stack(stack_a); // ソート後のスタックの内容を表示

    // スタックを解放
    while (stack_a != NULL)
    {
        t_node *temp = stack_a;
        stack_a = stack_a->next;
        free(temp);
    }

    return 0;
}
*/

/*
int	main(int argc, char **argv)
{
	// int	data = 1;
	t_node *stack_a = NULL;
	// t_node *new_node;
	(void)argv;
	// new_node = create_node(data);
	int i = 1;
	while (i < argc)
	{
		printf("bbb\n");
		stack_a = append_node(stack_a, atoi(argv[i]));
		i++;
	}
	// stack_a = new_node; // 新しいノードを stack_a に代入
	printf("aaa\n");
	if (argc == 2)
	{
		printf("stack_a :%p\n", (void *)stack_a);
		sa(&stack_a);
	}
	else if (argc == 4)
	{
		sort_three(&stack_a);
	}
	return 0;
	  // スタックの内容を表示（デバッグ用）
    t_node *current = stack_a;
    while (current != NULL) {
        printf("%p\n", (void *)current->next);
        current = current->next;
    }

    // スタックを解放
    while (stack_a != NULL) {
        t_node *temp = stack_a;
        stack_a = stack_a->next;
        free(temp);
    }

//	else if (argc > 3)
//		quick_sort(stack_a, stack_b);
//	else
//		radix_sort(stack_a, stack_b, a_size);
	return (0);
}
*/
