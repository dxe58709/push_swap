/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:01:37 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/08 15:42:10 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	len;
	ssize_t	start;
	ssize_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (0 < end && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (start > end)
		return (ft_strdup(""));
	else
		len = end - start + 1;
	new = (char *)malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1 + start, len);
	new[len] = '\0';
	return (new);
}
