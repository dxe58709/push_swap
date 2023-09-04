#include<>

typedef struct s_node
{
	int content; //nodeが保持するデータを格納
	struct s_node *next;//次のnodeが指すポインタを格納
} t_node;

void push(t_node **src, t_node **dst)//src から dst に要素を移動する関数
{
	t_node *new_dst_head;
	t_node *src_sentinel;
	t_node *dst_sentinel;

	if (*src == NULL || (*src)->next == NULL)
		return;

	new_dst_head = *src;//src の新しい先頭ノード
	src_sentinel = *src;//src リストの最後の要素の次の要素を示す
	dst_sentinel = *dst;//dst リストの最後の要素の次の要素を示す

	while (src_sentinel->next->next != NULL)//src リストの最後のノードを見つける
	{
		src_sentinel = src_sentinel->next;
	}//ループを抜けると、src_sentinel は src リストの最後の要素を指す

	*src = src_sentinel->next;
	src_sentinel->next = NULL;

	new_dst_head->next = *dst;
	*dst = new_dst_head;
//src リストから最後の要素を切り離し、その要素を dst リストの先頭に追加しています。
}

int main()
{
	// テスト用のコード
	t_node *stack_a = NULL;
	t_node *stack_b = NULL;

	// スタックAにノードを追加
	t_node node1 = {1, NULL};
	t_node node2 = {2, NULL};
	t_node node3 = {3, NULL};
	stack_a = &node1;
	node1.next = &node2;
	node2.next = &node3;

	// スタックBに要素をプッシュ
	push(&stack_a, &stack_b);

	// スタックBの内容を表示
	t_node *current = stack_b;
	while (current != NULL)
	{
		printf("%d ", current->content);
		current = current->next;
	}

	return 0;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	ft_putstr_fd("pa\n", STDOUT_FILENO);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pb\n", STDOUT_FILENO);
}
