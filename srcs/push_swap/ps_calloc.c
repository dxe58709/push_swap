/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:33:59 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/25 21:01:25 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

void	*ps_calloc(size_t count, size_t size)
{
	void	*new;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (size > SIZE_MAX / count)
		return (0);
	new = (void *)malloc(count * size);
	if (new == NULL)
	{
		printf("error.\n");
		exit(1);
	}
	ft_bzero(new, (count * size));
	return (new);
}
