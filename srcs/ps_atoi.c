/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:11:23 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/11 15:17:53 by nsakanou         ###   ########.fr       */
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

int	ps_atoi(const char *str, int *flag)
{
	int		i;
	long	nb;
	int		count;

	i = 0;
	nb = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (ft_positiv(str + i, &count) == 1)
		i++;
	while (ft_isdigit(str[i]))
	{
		if (count == 1 && ((nb > LONG_MAX / 10)
				|| ((nb == LONG_MAX / 10) && (str[i] - '0') > LONG_MAX % 10)))
			return ((int)LONG_MAX);
		else if (count == -1 && ((-nb < LONG_MIN / 10)
				|| ((-nb == LONG_MIN / 10) && -(str[i] - '0') < LONG_MIN % 10)))
			return ((int)LONG_MIN);
		nb = nb * 10 + (str[i] - '0');
		i++;
		if (nb > INT_MAX || nb < INT_MIN)
			*flag = -1;
	}
	return (nb * count);
}

/*
#include <stdio.h>
int	main()
{
	const char *str = "21474836490";
	int	*flag;
	*flag = '0';

	printf("%p\n", flag);
	printf("%d\n", ps_atoi(str, flag));
	printf("%d\n", *flag);
	printf("%ld:%d\n",21474836490, (int)21474836490 );
}
*/
