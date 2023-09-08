/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:34:43 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/08 15:47:52 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *))
{
	t_node	*new;
	t_node	*first;
	t_node	*last;

	if (!lst || !f || !del)
		return (NULL);
	first = NULL;
	new = ft_lstnew(f(lst -> content));
	ft_lstadd_back(&first, new);
	last = first;
	lst = lst -> next;
	while (lst)
	{
		new = ft_lstnew(f(lst -> content));
		if (!new)
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		ft_lstadd_back(&last, new);
		last = last -> next;
		lst = lst -> next;
	}
	return (first);
}
