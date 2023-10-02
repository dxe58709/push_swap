/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:01:11 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/02 17:25:17 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdlib.h> 
# include <stdio.h> 
# include <limits.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>
# include <ctype.h>
# include <stdbool.h>

int		ps_atoi(const char *str, int *flag);

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

t_stack	*create_stack(void);
void	create_node(t_stack *stack, int data);
int		destory_node(t_stack *stack);

t_node	*partition(t_node *head, t_node **pivot);
t_node	*quick_sort(t_node *head);

int		*coordinate_compression(int argc, char **argv);

void	*ps_calloc(size_t count, size_t size);

// sort three
void	sort_three(t_node **stack_a);
#endif
