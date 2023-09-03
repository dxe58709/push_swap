/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:54:21 by nsakanou          #+#    #+#             */
/*   Updated: 2023/08/23 18:05:44 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>
# include <ctype.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *list, void (*del)(void*));
void	ft_lstclear(t_list **list, void (*del)(void*));
void	ft_lstiter(t_list *list, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*));
void	lst_free(t_node **stack_a, t_node **stack_b);

#endif
