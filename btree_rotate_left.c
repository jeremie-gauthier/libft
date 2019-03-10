#include "libft.h"

void	btree_rotate_left(t_btree **root)
{
	t_btree	*tmp;

	tmp = (*root)->right;
	(*root)->right = tmp->left;
	tmp->left = *root;
	(*root)->height = btree_height(*root);
	tmp->height = btree_height(tmp);
	*root = tmp;
}
