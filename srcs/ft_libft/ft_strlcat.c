/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:24:21 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/08 14:50:42 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] && i <= dstsize)
	{
		if (dstsize == i)
			return (i + ft_strlen(src));
		i++;
	}
	j = i;
	while (src[j - i] && j < dstsize - 1)
	{
		dst[j] = src[j - i];
		j++;
	}
	dst[j] = '\0';
	return (i + ft_strlen(src));
}
