#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;

	current = f(lst);
	head = current;
	lst = lst->next;
	current = current->next;
	while (lst)
	{
		current = f(lst);
		current = current->next;
		lst = lst->next;
	}
	return (head);
}
