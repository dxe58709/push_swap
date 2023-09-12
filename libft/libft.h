/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:54:21 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/12 19:15:04 by nsakanou         ###   ########.fr       */
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

typedef struct s_node
{
	void			*content;
	int				data;
	struct s_node	*next;
	struct s_node	*stack_a;
	struct s_node	*stack_b;
}t_node;

t_node	*ft_lstnew(void *content);
void	ft_lstadd_front(t_node **lst, t_node *new);
int		ft_lstsize(t_node *lst);
t_node	*ft_lstlast(t_node *lst);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstdelone(t_node *list, void (*del)(void*));
void	ft_lstclear(t_node **list, void (*del)(void*));
void	ft_lstiter(t_node *list, void (*f)(void *));
t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void*));
void	lst_free(t_node **stack_a, t_node **stack_b);

void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);

#endif
