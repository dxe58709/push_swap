/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:23:58 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/05 18:34:25 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_free(t_node **stack_a, t_node **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}

