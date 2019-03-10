#include "libft.h"

void	btree_rotate_right(t_btree **root)
{
	t_btree	*tmp;

	tmp=(*root)->left;
	(*root)->left = tmp->right;
	tmp->right = *root;
	(*root)->height = btree_height(*root);
	tmp->height = btree_height(tmp);
	*root = tmp;
}
