/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:38:03 by nsakanou          #+#    #+#             */
/*   Updated: 2023/10/11 17:07:58 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	b_sort(int argc, int *temp2)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 2 - i)
		{
			if (temp2[j] > temp2[j + 1])
			{
				temp = temp2[j];
				temp2[j] = temp2[j + 1];
				temp2[j + 1] = temp;
			}
			else if (j != argc - 1 && temp2[j] == temp2[j+ 1])
			{
				printf("error\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

static void	add_argv(int *temp1, int argc, char **argv)
{
	int	i;

	i = 1;
	//splitしたバージョンと普通のバージョン
	while (i < argc)
	{
		temp1[i - 1] = atoi((argv[i]));
		i++;
	}
}

int	*coordinate_compression(int argc, char **argv)
{
	int	*temp1;
	int	*temp2;
	int	*temp3;
	int	i;
	int	j;

	temp1 = ps_calloc((argc - 1), sizeof(int));
	add_argv(temp1, argc, argv);
	temp2 = ps_calloc((argc - 1), sizeof(int));
	add_argv(temp2, argc, argv);
	b_sort(argc, temp2);
	temp3 = ps_calloc((argc - 1), sizeof(int));
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (temp1[i] == temp2[j])
			{
				temp3[i] = j;
			}
			j++;
		}
		i++;
	}
	return (temp3);
}
