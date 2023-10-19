/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:39:25 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/19 20:41:40 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool is_sorted(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
        if (arr[i] > arr[i + 1])
            return (false);
		i++;
    }
    return (true);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		*temp3;
	int		flag;

	flag = 0;
	temp3 = NULL;
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
	if (is_sorted(temp3, argc - 1))
		exit(0);
	stack_a = create_stack();
	stack_a->current = argc - 1;
	stack_a->max = argc - 1;
	while (--argc)
		create_node(stack_a, temp3[argc - 1]);
	free(temp3);
	sort_any(stack_a);
	exit(0);
}
