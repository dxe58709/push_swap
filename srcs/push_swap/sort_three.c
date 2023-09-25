/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:31:17 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/25 20:03:01 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	// printf("333  %p\n", (*stack_a));
	first = (*stack_a)->data;
	second = (*stack_a)->next->data;
	printf("ccc\n");
	third = (*stack_a)->next->next->data;
	if (first > second && first < third && second < third)
		sa(stack_a);
	if (first > second && first > third && second < third)
		ra(stack_a);
	if (first < second && first > third && second > third)
		rra(stack_a);
	if (first > second && first > third && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	if (first < second && first < third && second > third)
	{
		sa(stack_a);
		ra(stack_a);
	}
		printf("ddd\n");
}


// int	main(int argc, char **argv)
// {
// 	// int	data = 1;
// 	t_node *stack_a = NULL;
// 	// t_node *new_node;
// 	(void)argv;
// 	// new_node = create_node(data);
// 	int i = 1;
// 	while (i < argc)
// 	{
// 		printf("bbb\n");
// 		stack_a = append_node(stack_a, atoi(argv[i]));
// 		i++;
// 	}
// 	// stack_a = new_node; // 新しいノードを stack_a に代入
// 	printf("aaa\n");
// 	if (argc == 2)
// 	{
// 		printf("stack_a :%p\n", (void *)stack_a);
// 		sa(&stack_a);
// 	}
// 	else if (argc == 4)
// 	{
// 		sort_three(&stack_a);
// 	}
// 	return 0;
// 	  // スタックの内容を表示（デバッグ用）
//     t_node *current = stack_a;
//     while (current != NULL) {
//         printf("%p\n", (void *)current->next);
//         current = current->next;
//     }

//     // スタックを解放
//     while (stack_a != NULL) {
//         t_node *temp = stack_a;
//         stack_a = stack_a->next;
//         free(temp);
//     }

// //	else if (argc > 3)
// //		quick_sort(stack_a, stack_b);
// //	else
// //		radix_sort(stack_a, stack_b, a_size);
// 	return (0);
// }

