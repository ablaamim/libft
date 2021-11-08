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
	t_list	*elem_test;

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	ft_lstadd_back(&elem, ft_lstnew(str4));
	if (!strcmp(elem->content, str1) \
		&& !strcmp(elem->next->content, str2) \
		&& !strcmp(elem->next->next->content, str3) \
		&& !strcmp(elem->next->next->next->content, str4))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(elem->next->next->next);
	free(elem->next->next);
	free(elem->next);
	free(elem);

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	ft_lstadd_back(&elem, NULL);
	if (!strcmp(elem->content, str1) \
		&& !strcmp(elem->next->content, str2) \
		&& !strcmp(elem->next->next->content, str3))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(elem->next->next);
	free(elem->next);
	free(elem);

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	elem_test = ft_lstnew(str4);
	ft_lstadd_back(NULL, elem_test);
	if (!strcmp(elem->content, str1) \
		&& !strcmp(elem->next->content, str2) \
		&& !strcmp(elem->next->next->content, str3))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	free(elem->next->next);
	free(elem->next);
	free(elem);
	free(elem_test);

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	ft_lstadd_back(NULL, NULL);
	if (!strcmp(elem->content, str1) \
		&& !strcmp(elem->next->content, str2) \
		&& !strcmp(elem->next->next->content, str3))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	free(elem->next->next);
	free(elem->next);
	free(elem);

	return (0);
}
