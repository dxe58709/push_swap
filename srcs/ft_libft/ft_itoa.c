/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:29:12 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/04 12:25:32 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_positiv(int n, int *sign, unsigned int *nb)
{
	if (n < 0)
	{
		*sign = -1;
		*nb = -n;
	}
	else
	{
		*sign = 1;
		*nb = n;
	}
}

char	*ft_itoa(int n)
{
	size_t			len;
	int				sign;
	unsigned int	nb;
	char			*new;

	len = get_num(n);
	if (n >= 0)
		new = (char *)malloc((len + 1) * sizeof(char));
	else
		new = (char *)malloc((len + 2) * sizeof(char));
	if (new == NULL)
		return (NULL);
	if (n >= 0)
		new[len] = '\0';
	else
		new[len + 1] = '\0';
	ft_positiv(n, &sign, &nb);
	if (sign == -1)
		new[0] = '-';
	while (len--)
	{
		new[len + (sign == -1)] = nb % 10 + '0';
		nb /= 10;
	}
	return (new);
}
