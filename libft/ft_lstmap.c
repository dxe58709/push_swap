/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:34:43 by nsakanou          #+#    #+#             */
/*   Updated: 2023/06/08 14:47:10 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;
	t_list	*last;

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
