#include "../libft.h"
#include <stdio.h>

void	del(void	*content)
{
	if (content)
	{
		content = 0;
		free(content);
	}
}

int	main(void)
{
	char	str1[] = "Hello world";
	char	str2[] = "42";
	char	str3[] = "";
	char	str4[] = "Found it!";
	t_list	*elem;

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	ft_lstclear(&elem->next, del);
	// printf("%d\n", ft_lstsize(elem));
	if (ft_lstsize(elem) == 1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
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
	ft_lstclear(&elem->next->next->next, del);
	// printf("%d\n", ft_lstsize(elem));
	if (ft_lstsize(elem) == 3)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(elem->next);
	free(elem);

	elem = NULL;
	ft_lstclear(&elem, del);
	if (!elem)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);

	elem = ft_lstnew(NULL);
	ft_lstclear(&elem, del);
	// printf("%d\n", ft_lstsize(elem));
	if (!ft_lstsize(elem))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);

	elem = ft_lstnew(str1);
	elem->next = ft_lstnew(str2);
	elem->next->next = ft_lstnew(str3);
	ft_lstclear(&elem->next->next, NULL);
	if (ft_lstsize(elem) == 3)
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	free(elem->next->next);
	free(elem->next);
	free(elem);

	return (0);
}
