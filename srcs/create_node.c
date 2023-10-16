/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:58:51 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/16 14:18:51 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

t_stack	*create_stack(void)
{
	t_stack	*a;

	a = (t_stack *)malloc(sizeof(t_stack));
	if (!a)
		memory_error();
	a->head = NULL;
	a->end = NULL;
	return (a);
}

// 新しいノードを作成する関数
void	create_node(t_stack *stack, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		memory_error();
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = stack->head;
	if (!stack->head)
	{
		stack->head = new_node;
		stack->end = new_node;
	}
	else
	{
		stack->head->next = new_node;
		new_node->prev = stack->head;
		stack->head = new_node;
	}
}

int	destroy_node(t_stack *stack)
{
	t_node	*temp;
	int		data;

	if (stack->head == NULL)
		memory_error();
	temp = stack->head;
	data = temp->data;
	if (stack->head == stack->end)
	{
		stack->head = NULL;
		stack->end = NULL;
	}
	else
	{
		stack->head = stack->head->prev;
		stack->head->next = NULL;
	}
	free(temp);
	return (data);
}
