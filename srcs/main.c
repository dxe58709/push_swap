/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/18 15:30:04 by nsakanou         ###   ########.fr       */
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
	exit(0);
}
