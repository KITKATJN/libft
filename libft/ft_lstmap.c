#include "libft.h"

static t_list	*ft_lstnew1(void *content)
{
	t_list	*lst;

	lst = (t_list*)malloc(sizeof(t_list));
	if (lst)
	{
		lst->content = content;
		lst->next = 0;
	}
	return (lst);
}



/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*list;
	t_list	*copy_list;
	t_list	*new;
	t_list	*head;
	
	list = lst;
	head = 0;
	copy_list = 0;
	while (list && f)
	{
		new = ft_lstnew(f(list->content));
		if (!new)
		{
			ft_lstclear(&copy_list, del);
			return (0);
		}
		if (head)
			head->next = new;
		head = new;
		if (!copy_list)
			copy_list = head;
		list = list->next;
	}
	return (copy_list);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*list;
	t_list	*copy_list;
	t_list	*new;
	
	list = lst;
	copy_list = 0;
	while (list && f)
	{
		new = ft_lstnew(f(list->content));
		if (!new)
		{
			ft_lstclear(&copy_list, del);
			return (0);
		}
		ft_lstadd_back(&copy_list, new);
		list = list->next;
	}
	return (copy_list);
}*/


