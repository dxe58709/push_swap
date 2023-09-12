/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:00:53 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/12 17:47:15 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_sentinel_node(void)//番兵ノードを作成する関数
{
	t_node	*sentinel;

	sentinel = (t_node *)malloc(sizeof(t_node));
	if (sentinel == NULL)
		return (NULL);
	if (sentinel != 0)//番兵ノードが正常に作成されている場合
	{
		*(int *)(sentinel->content) = -1;
		sentinel->next = NULL; // 初期状態ではリストは空
	}
	return (sentinel);
}
