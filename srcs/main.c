/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/18 14:52:27 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		*temp3;
	int		flag;

	flag = 0;
	if (argc == 2)
	{
		argv = ps_split(argv[1], ' ');
		flag = 1;
		argc = 0;
		while (argv[argc] != NULL)
			argc++;
		argc++;
	}
	temp3 = coordinate_compression(argc, argv, &flag);
	stack_a = create_stack();
	stack_a->current = argc - 1;
	stack_a->max = argc - 1;
	while (--argc)
		create_node(stack_a, temp3[argc - 1]);
	free(temp3);
	sort_any(stack_a);
}
	// if (argc == 4)
	// 	sort_three(stack_a);
	// else if (argc == 6)
	// 	sort_five(stack_a);
	// else
	// 	sort_any(stack_a);
	// while (stack_a->head)
	// {
	// 	ft_printf("node %d\n", stack_a->head->data);
	// 	stack_a->head = stack_a->head->prev;
	// }
