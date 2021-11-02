#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*ret_ft_strjoin;

	ret_ft_strjoin = ft_strjoin("Hello", " world!");
//	printf("ret_ft_strjoin -> %s\n", ret_ft_strjoin);
	if (!strcmp("Hello world!", ret_ft_strjoin))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(ret_ft_strjoin);

	ret_ft_strjoin = ft_strjoin("", "world!");
//	printf("ret_ft_strjoin -> %s\n", ret_ft_strjoin);
	if (!strcmp("world!", ret_ft_strjoin))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(ret_ft_strjoin);

	ret_ft_strjoin = ft_strjoin("Hello", " ");
//	printf("ret_ft_strjoin -> %s\n", ret_ft_strjoin);
	if (!strcmp("Hello ", ret_ft_strjoin))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	free(ret_ft_strjoin);

	ret_ft_strjoin = ft_strjoin("", "");
//	printf("ret_ft_strjoin -> %s\n", ret_ft_strjoin);
	if (!strcmp("", ret_ft_strjoin))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);

	ret_ft_strjoin = ft_strjoin("", " ");
//	printf("ret_ft_strjoin -> %s\n", ret_ft_strjoin);
	if (!strcmp(" ", ret_ft_strjoin))
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	free(ret_ft_strjoin);
	return (0);
}
