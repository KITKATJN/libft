#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*nextl;
	
	list = *lst;
	while (list)
	{
		nextl = list->next;
		if (del)
			del(list->content);
		free(list);
		list = nextl;
	}
	*lst = 0;
}
