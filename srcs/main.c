/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/12 18:54:53 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		*temp3;

	//split 入れる
	//第二引数にsplitがくる ./a.out "1 3 5"
	// ./a.out "1 3 5" 7とかはerrorにしとく
  //if (argc == 2 && argv[1][0] == )
  //{
	temp3 = coordinate_compression(argc, argv);
	stack_a = create_stack();
	stack_a->current = argc - 1;
	stack_a->max = argc - 1;

	while (--argc)
		create_node(stack_a, temp3[argc - 1]);//後ろから入れてく
	free(temp3);

	//sort_three(stack_a);
	//sort_five(stack_a);
	sort_any(stack_a);
	 while (stack_a->head)
	 {
	 	printf("node %d\n", stack_a->head->data);
	 	stack_a->head = stack_a->head->prev;
	 }
	// printf("b: node %d\n", stack_b->head->data);
	// return (0);
}

/*
void	print_stack(void *nbr)
{
	printf("[%d]\n", *(int *)nbr);
}

int	main()
{
	t_node	*stack_a = NULL;
	//t_list	*stack_b = NULL;
	t_node	*stack_new;
	
	int	*i = malloc(sizeof(int *));
	*i = 1;
	stack_new = ft_lstnew(i);
	ft_lstadd_back(&stack_a, stack_new);
	
	int	*j = malloc(sizeof(int *));
	*j = 2;
	stack_new = ft_lstnew(j);
	ft_lstadd_back(&stack_a, stack_new);

	pa(&stack_a);
	ft_lstiter(stack_a, print_stack);
	ft_lstclear(&stack_a, free);
}
*/
