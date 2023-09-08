/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:00:53 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/08 15:23:23 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_node	*create_sentinel_node(void)
{
	t_node	*sentinel;

	sentinel = (t_node *)malloc(sizeof(t_node));
	if(sentinel != 0)//番兵ノードが正常に作成されている場合
	{
		*(int *)(sentinel->content) = -1;
		sentinel->next = NULL; // 初期状態ではリストは空
	}
	return (sentinel);
}
