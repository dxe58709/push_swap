//ヘッダーを入れる

#include "push_swap.h"

void	lst_free(t_node **stack_a, t_node **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}

