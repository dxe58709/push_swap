/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:01:11 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/13 18:42:48 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include <stdlib.h> 
# include <stdio.h> 
# include <limits.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>
# include <ctype.h>
# include <stdbool.h>

typedef struct s_node
{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}t_node;

typedef struct s_stack
{
	struct s_node	*head;
	struct s_node	*end;
	int				current;
	int				max;
}t_stack;

int		ps_atoi(const char *str);

void	swap(t_stack *stack);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);

void	push(t_stack *src, t_stack *dst);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);

void	rotate(t_stack *stack);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);

void	reverse_rotate(t_stack *stack);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);

t_stack	*create_stack(void);
void	create_node(t_stack *stack, int data);
int		destroy_node(t_stack *stack);

t_node	*partition(t_node *head, t_node **pivot);
t_node	*quick_sort(t_node *head);

int		*coordinate_compression(int argc, char **argv);

void	*ps_calloc(size_t count, size_t size);

void	sort_three(t_stack *stack_a);
int		search_two(t_stack *stack, int *data);
void	sort_five(t_stack *stack_a);
void	sort_any(t_stack *stack_a);

void	ft_check_args(int argc, char **argv);

void	ft_error(void);
void	memory_error(void);

char	**ps_split(char const *s, char c);
#endif
