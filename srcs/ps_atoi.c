/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:01:44 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/18 15:24:20 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_positiv(const char *str, int *count)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (ft_isdigit(str[i + 1]) == 0)
			return (0);
		if (str[i] == '-')
			*count *= -1;
		i++;
	}	
	return (i);
}

int	ps_atoi(const char *str)
{
	int		i;
	long	nb;
	int		count;

	i = 0;
	nb = 0;
	count = 1;
	if (ft_positiv(str + i, &count) == 1)
		i++;
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		if ((count == 1 && INT_MAX < nb) || \
			(count == -1 && INT_MIN > -nb))
			ft_error();
		i++;
	}
	if (!ft_isdigit(str[i]) && str[i] != '\0')
		ft_error();
	return (nb * count);
}
