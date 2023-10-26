/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:52:28 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/08 14:47:53 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = buf;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)ch;
			i++;
	}
	return (buf);
}
