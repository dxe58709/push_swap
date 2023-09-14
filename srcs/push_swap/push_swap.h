/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:01:11 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/14 17:30:20 by nsakanou         ###   ########.fr       */
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


int		ps_atoi(const char *str, int *flag);

t_node	*create_sentinel_node(void);//番兵ノードを作成する関数(list.c)

void	swap(t_node **stack);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);

void	push(t_node **src, t_node **dst);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

void	rotate(t_node **stack);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);

void	reverse_rotate(t_node **stack);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);

t_node	*create_node(int data);

t_node	*partition(t_node *head, t_node **pivot);
t_node	*quick_sort(t_node *head);

#endif
