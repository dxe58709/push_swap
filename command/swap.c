#include <>

typedef struct s_node
{
    int content;
    struct s_node *next;
} t_node;

void swap(t_node **stack)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        // リストが空または1つのノードしかない場合、何もしない
        return;
    }

    t_node *old_head = *stack;          // 現在のヘッド
    t_node *new_head = old_head->next;  // 新しいヘッド

    // リストのヘッドを交換
    old_head->next = new_head->next;
    new_head->next = old_head;

    // スタックの新しいヘッドに設定
    *stack = new_head;
}

int main()
{
    // テスト用のコード
    t_node *stack = NULL;

    // スタックにノードを追加
    t_node node1 = {1, NULL};
    t_node node2 = {2, NULL};
    t_node node3 = {3, NULL};
    stack = &node1;
    node1.next = &node2;
    node2.next = &node3;

    // ノードの交換
    swap(&stack);

    // 結果の表示
    t_node *current = stack;
    while (current != NULL)
    {
        printf("%d ", current->content);
        current = current->next;
    }

    return 0;
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	ft_putstr_fd("sa\n", STDOUT_FILENO);
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	ft_putstr_fd("sb\n", STDOUT_FILENO);
}

