/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:32:21 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/04 13:01:01 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s1);
	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, len);
	return (new);
}
