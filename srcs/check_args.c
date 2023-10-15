/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:02:14 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/13 18:51:14 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
./ 2 1 0 →0が来たらerrorになってしまう
./ 2 1 引数二つの時セグフォ


void	ft_check_args(int argc, char **argv)
{
	int		i;
	long	tmp;

	i = 1;
  if (argc == 2)
	{
		argv = ps_split(argv[1], ' ');
printf("argv]]%p\n", argv);
		argc = 0;
		while (argv[argc])
			argc++;
	}
	if (argc >= 2)
	{
		while (argv[i])
		{
			tmp = ft_atoi(argv[i]);
			if (tmp < -2147483648 || tmp > 2147483647)
				ft_error();
			i++;
		}
		return ;
	}
}

