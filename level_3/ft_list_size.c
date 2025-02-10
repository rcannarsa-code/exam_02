typedef struct s_list
{
	struct s_list	*next;
	void		*data;
}	t_list;

int ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int i = 0;
	
	if (!begin_list)
		return (0);
	current = begin_list;
	while (current)
	{
		current = current->next;
		i++;
	}
	return (i);
}
