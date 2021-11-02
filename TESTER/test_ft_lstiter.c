#include "../libft.h"
#include <stdio.h>
#include <string.h>

void	f(void	*content)
{
	if (content)
	{
		strcpy(content, "Hello");
	}
}

int	main(void)
{
	char	str1[15] = "Hello world";
	char	str2[15] = "42";
	char	str3[15] = "";
	char	str4[15] = "Found it!";
	t_list	*elem;

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	ft_lstiter(elem, f);
	if (!strcmp(elem->content, "Hello") \
		&& !strcmp(elem->next->content, "Hello") \
		&& !strcmp(elem->next->next->content, "Hello"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

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
	ft_lstiter(elem->next->next->next, f);
	if (!strcmp(elem->next->next->content, str3) \
		&& !strcmp(elem->next->next->next->content, "Hello") \
		&& !strcmp(elem->next->next->next->next->next->next->content, "Hello") \
		&& !strcmp(elem->next->next->next->next->next->next->next->next->next->content, "Hello"))
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
	ft_lstiter(elem, f);
	if (!elem)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);

	elem = ft_lstnew(str1);
	ft_lstiter(elem, f);
	if (!strcmp(elem->content, "Hello"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	free(elem);

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	ft_lstiter(elem->next->next, NULL);
	if (!strcmp(elem->content, str1) \
		&& !strcmp(elem->next->content, str2) \
		&& !strcmp(elem->next->next->content, str3))
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	free(elem->next->next);
	free(elem->next);
	free(elem);

	return (0);
}
