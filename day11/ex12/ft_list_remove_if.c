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

// t_list *ft_list_push_params(int ac, char **av)
// {
// 	int		n;
// 	t_list	*new_list;

// 	new_list = 0;
// 	n = 1;
// 	while (n <= --ac)
// 		ft_list_push_back(&new_list, av[ac]);
// 	return (new_list);
// }

// void	ft_putlist(t_list *begin_list)
// {
// 	t_list	*next;

// 	next = begin_list;
// 	while (next->next)
// 	{
// 		printf("%s\n", (char*)next->data);
// 		next = next->next;
// 	}
// 	printf("%s\n", (char*)next->data);
// }

// void	ft_putstr(char *str)
// {
// 	printf("%s, ",str);
// }

// void ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
// 	t_list	*next;

// 	next = begin_list;
// 	while (next->next)
// 	{
// 		(*f)(next->data);
// 		next = next->next;
// 	}
// 	f(next->data);
// }

// int		ft_strcmp(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i] != '\0' || s2[i] != '\0')
// 	{
// 		if (s1[i] != s2[i])
// 			return (s1[i] - s2[i]);
// 		i++;
// 	}
// 	return (0);
// }

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*last;
	t_list	*current;
	t_list	*tmp;

	last = NULL;
	current = *begin_list;
	tmp = NULL;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
				*begin_list = current->next;
			else
				last->next = current->next;
			tmp = current;
			current = current->next;
			free(tmp);
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}

// int		main(int ac, char **av)
// {
// 	t_list	*test;
	
// 	if (ac > 1)
// 		test = ft_list_push_params(ac, av);
// 	ft_putlist(test);
// 	printf("\n");
// 	ft_list_remove_if(&test, "1", ft_strcmp);
// 	ft_putlist(test);
// 	return (0);
// }
