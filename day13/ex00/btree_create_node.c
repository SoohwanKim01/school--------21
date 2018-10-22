#include 	"ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*new;

	if (!(new = (t_btree*)malloc(sizeof(t_btree))))
		return (NULL);
	new->item	= item;
	new->left	= NULL;
	new->right	= NULL;
	return (new);
}

// int			main(void)
// {
// 	t_btree	*test;

// 	test	= btree_create_node("test");
// 	printf("%s\n", (char*)test->item);
// 	return(0);
// }
