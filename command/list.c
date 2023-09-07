/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:00:53 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/07 18:43:16 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


t_list	*create_sentinel_node(void)
{
    t_list *sentinel = (t_list *)malloc(sizeof(t_list));
    if (sentinel != 0)//番兵ノードが正常に作成されている場合
	{
        *(int *)(sentinel->content) = -1;
		sentinel->next = NULL; // 初期状態ではリストは空
    }
    return sentinel;
}
