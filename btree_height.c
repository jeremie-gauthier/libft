#include "libft.h"

int		btree_height(t_btree *root)
{
	int	lh;
	int	rh;

	if (root == NULL)
		return(0);
	if (root->left == NULL)
		lh = 0;
	else
		lh = 1 + root->left->height;
	if (root->right == NULL)
		rh = 0;
	else
		rh = 1 + root->right->height;
	if (lh > rh)
		return(lh);
	return(rh);
}
