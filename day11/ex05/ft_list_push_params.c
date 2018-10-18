// #include	<stdio.h>
#include	"ft_list.h"

// void	ft_list_push_back(t_list **begin_list, void *data)
// {
// 	t_list	*next;
	
// 	next = *begin_list;
// 	if (next)
// 	{
// 		while (next->next)
// 			next = next->next;
// 		next->next = ft_create_elem(data);
// 	}
// 	else
// 		*begin_list = ft_create_elem(data);
// }

t_list *ft_list_push_params(int ac, char **av)
{
	int		n;
	t_list	*new_list;

	new_list = 0;
	n = 0;
	while (n <= --ac)
		ft_list_push_back(&new_list, av[ac]);
	return (new_list);
}

// void	ft_putlist(t_list *begin_list)
// {
// 	t_list	*next;

// 	next = begin_list;
// 	while (next->next)
// 	{
// 		printf("%s\n", (char*)next->data);
// 		next = next->next;
// 	}
// }

// int		main(int ac, char **av)
// {
// 	t_list	*test;
	
// 	if (ac > 1)
// 		test = ft_list_push_params(ac, av);
// 	ft_putlist(test);
// 	return (0);
// }
