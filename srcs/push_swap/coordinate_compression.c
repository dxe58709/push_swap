/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsakanou <nsakanou@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:38:03 by nsakanou          #+#    #+#             */
/*   Updated: 2023/09/20 17:37:20 by nsakanou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *create_node(int data);
void    append_node(t_node *list, int data);
void    display_list(t_node *list);

void	b_sort(int argc, int *temp2)
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

void	coordinate_compression(int *temp1, int *temp2, int *temp3, int argc)
{
	int		i = 0;
	int		j = 0;
	int		temp;

	b_sort(argc, temp2);
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
}

int	main(int argc, char **argv)
{
	int *flag = 0;
	int *temp1 = malloc((argc - 1)*sizeof(int));
	int	i = 0;
	int *temp2 = malloc((argc - 1)*sizeof(int));
	int *temp3 = malloc((argc - 1)*sizeof(int));

	while (i + 1 < argc)
	{
		temp1[i] = ps_atoi(argv[i + 1], flag);
		temp2[i] = ps_atoi(argv[i + 1], flag);
		i++;
	}
	coordinate_compression(temp1, temp2, temp3, argc);
	i = 0;
	while (i < argc -1)
	{
		printf("[main%d: %d %d  %d]\n",i,temp1[i],temp2[i],temp3[i]);
		i++;
	}
   
	t_node **list;

   append_node(list[0], 1);
   append_node(list[1], 2);
   append_node(list[2], 3);

   printf("Circular Linked List: ");
   display_list(*list);

   return 0;
}

