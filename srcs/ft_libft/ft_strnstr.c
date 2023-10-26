/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:54:32 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/19 19:56:21 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!haystack && !needle)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (!needle_len || !len)
		return ((char *)haystack);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (*haystack == *needle
			&& ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
