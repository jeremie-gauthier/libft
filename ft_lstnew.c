#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list*)malloc(sizeof(*node))))
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		if (!(node->content = malloc(content_size)))
		{
			free(node);
			return (NULL);
		}
		node->content = (void*) content;
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
