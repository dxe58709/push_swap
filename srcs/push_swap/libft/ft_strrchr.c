/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:54:26 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/08 14:51:57 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	chr;
	char	*memory;

	chr = (char)c;
	memory = NULL;
	while (*s != '\0')
	{
		if (*s == chr)
			memory = (char *)s;
		s++;
	}
	if (chr == '\0')
		return ((char *)s);
	return (memory);
}
