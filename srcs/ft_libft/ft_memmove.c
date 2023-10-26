/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:52:24 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/11 13:14:43 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy(unsigned char *dst, unsigned char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			dst[len - 1] = src[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d == s)
		return (d);
	copy(d, s, len);
	return (d);
}
