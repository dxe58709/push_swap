/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:58:51 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/03 13:55:38 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

t_stack	*create_stack(void)
{
	t_stack	*a;

	a = (t_stack *)malloc(sizeof(t_stack));
  if (!a)
  {
    printf("memory failed.\n");
    exit(1);
  }
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
	{
		printf("memory failed.\n");
		exit(1);
	}
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = NULL;
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

int	destory_node(t_stack *stack)
{
	t_node	*temp;
	int		data;

//error:headがNULLの時error出力してexit
	if (stack->head == NULL)
	{
		printf("memory failed.\n");
		exit(1);
	}
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
