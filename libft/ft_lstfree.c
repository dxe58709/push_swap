/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:23:58 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/07 17:13:49 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_free(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a, free);
	ft_lstclear(stack_b, free);
}

