#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Hello world";
	char	str2[] = "42";
	char	str3[] = "";
	char	str4[] = "Found it!";
	t_list	*elem;
	t_list	*last;

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	last = ft_lstlast(elem);
	if (!strcmp(last->content, elem->next->next->content))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(elem->next->next);
	free(elem->next);
	free(elem);

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	elem->next->next->next = ft_lstnew(str1);
	elem->next->next->next->next = ft_lstnew(str2);
	elem->next->next->next->next->next = ft_lstnew(str3);
	elem->next->next->next->next->next->next = ft_lstnew(str1);
	elem->next->next->next->next->next->next->next = ft_lstnew(str2);
	elem->next->next->next->next->next->next->next->next = ft_lstnew(str3);
	elem->next->next->next->next->next->next->next->next->next = ft_lstnew(str4);
	last = ft_lstlast(elem);
	if (!strcmp(last->content,\
		elem->next->next->next->next->next->next->next->next->next->content))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(elem->next->next->next->next->next->next->next->next->next);
	free(elem->next->next->next->next->next->next->next->next);
	free(elem->next->next->next->next->next->next->next);
	free(elem->next->next->next->next->next->next);
	free(elem->next->next->next->next->next);
	free(elem->next->next->next->next);
	free(elem->next->next->next);
	free(elem->next->next);
	free(elem->next);
	free(elem);

	elem = NULL;
	if (!ft_lstlast(elem))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);

	elem = ft_lstnew(NULL);
	if (ft_lstlast(elem) == elem)
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	free(elem);

	return (0);
}
