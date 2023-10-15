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

	ft_check_args(argc, argv);
	temp3 = coordinate_compression(argc, argv);
printf("[argv]%s\n", argv[1]);
 printf("[argv]%s\n", argv[2]);
 printf("[argv]%s\n", argv[3]);
	stack_a = create_stack();
	stack_a->current = argc - 1;
	stack_a->max = argc - 1;
	while (--argc)
		create_node(stack_a, temp3[argc - 1]);//後ろから入れてく
	free(temp3);
	sort_any(stack_a);
	while (stack_a->head)
	{
		ft_printf("node %d\n", stack_a->head->data);
		stack_a->head = stack_a->head->prev;
	}
}
