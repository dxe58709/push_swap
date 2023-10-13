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

void	ft_check_args(int argc, char **argv)
{
	int		i;
	int		*flag;
	long	tmp;

	i = 1;
	flag = 0;
	if (argc >= 2)
	{
		while (argv[i])
		{
			tmp = ps_atoi(argv[i]);
			if (tmp < -2147483648 || tmp > 2147483647)
				ft_error();
			i++;
		}
		return ;
	}
	else
		ft_error();
}
