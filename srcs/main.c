/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/13 17:57:23 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		*temp3;

	if (argc == 2)
	{
		argv = ps_split(argv[1], ' ');
		ft_printf("jjj %d\n",argv);
		argc = 0;
		while (argv[argc])
		{
			ft_printf("[argv] %d\n",argc);
			argc++;
		}
	}
	ft_check_args(argc, argv);
	temp3 = coordinate_compression(argc, argv);
	stack_a = create_stack();
	stack_a->current = argc - 1;
	stack_a->max = argc - 1;
	while (--argc)
		create_node(stack_a, temp3[argc - 1]);//後ろから入れてく
	free(temp3);
	ft_printf("[stack_a] %d\n", stack_a->head->data);
	sort_any(stack_a);
	ft_printf("[stack_a2] %d\n", stack_a->head->data);
	ft_printf("[stack_a2] %d\n", stack_a->end->data);
	while (stack_a->head)
	{
		ft_printf("node %d\n", stack_a->head->data);
		stack_a->head = stack_a->head->prev;
	}
}
