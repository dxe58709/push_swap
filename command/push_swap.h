/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:01:11 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/07 19:01:14 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h> 
# include <limits.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>
# include <ctype.h>

t_list	*create_sentinel_node(void);//リストに番兵ノードを追加するため

void	swap(t_list **stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);

void	push(t_list **src, t_list **dst);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);

void	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);

void	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);

#endif
