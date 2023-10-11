/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:54:32 by nsakanou          #+#    #+#             */
/*   Updated: 2023/07/08 17:05:34 by nsakanou         ###   ########.fr       */
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
/*上のコード、unitはOKだけどlibft-tester-tokyoはNG(2~7out)
#include <stdio.h>

int	main()
{
	char *str = "libft-test-tokyo";
	int	len = strlen(str);
	int	i = 0;//検索文字が０の時
	if (i < len)
	{
		printf("1;%s\n", ft_strnstr(str, "", i));
		printf("%s\n", strnstr(str, "", i));
		printf("2;%s\n", ft_strnstr(str, "libft-test-tokyo", i));
		printf("%s\n", strnstr(str, "libft-test-tokyo", i));
		printf("3;%s\n", ft_strnstr(str, "libft", i));
		printf("%s\n", strnstr(str, "libft", i));
		printf("4;%s\n", ft_strnstr(str, "test", i));
		printf("%s\n", strnstr(str, "test", i));
		printf("5;%s\n", ft_strnstr(str, "tokyo", i));
		printf("%s\n", strnstr(str, "tokyo", i));
		printf("6;%s\n", ft_strnstr(str, "libft~", i));
		printf("%s\n", strnstr(str, "libft~", i));
		printf("7;%s\n", ft_strnstr(str, "z", i));
		printf("%s\n", strnstr(str, "z", i));
	}
}*/

/*
#include "libft.h"//2023.5.31作成

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	if (!haystack || !len)
		return (NULL);
	needle_len = ft_strlen(needle);
	if (!needle_len)
		return ((char *)haystack);
	while (*haystack != '\0' && len >= needle_len)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
*/