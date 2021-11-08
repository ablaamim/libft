#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Hello world";
	char	str2[] = "42";
	char	str3[] = "";
	t_list	*elem;

	elem = ft_lstnew(str1);
	if (!strcmp(elem->content, str1))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(elem);

	elem = ft_lstnew(str2);
	if (!strcmp(elem->content, str2))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(elem);

	elem = ft_lstnew(str3);
	if (!strcmp(elem->content, str3))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	free(elem);

	elem = ft_lstnew(0);
	if (elem->content == NULL)
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	free(elem);

	return (0);
}
