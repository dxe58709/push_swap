/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:33:59 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/13 14:27:03 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		memory_error();
	ft_bzero(new, (count * size));
	return (new);
}
