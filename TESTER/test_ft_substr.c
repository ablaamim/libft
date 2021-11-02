#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[13] = "Hello world!";
	char	str_null[4] = "";
	char	*ret_ft_substr;


	ret_ft_substr = ft_substr(str, 5, 8);
//	printf("ret_ft_substr -> %s\n", ret_ft_substr);
	if (!strcmp(" world!", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(ret_ft_substr);

	ret_ft_substr = ft_substr(str, 0, 5);
//	printf("ret_ft_substr -> %s\n", ret_ft_substr);
	if (!strcmp("Hello", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(ret_ft_substr);

	ret_ft_substr = ft_substr(str, 12, 8);
//	printf("ret_ft_substr -> %s\n", ret_ft_substr);
	if (!strcmp("", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	free(ret_ft_substr);

	ret_ft_substr = ft_substr(str, 12, 0);
//	printf("ret_ft_substr -> %s\n", ret_ft_substr);
	if (!strcmp("", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	free(ret_ft_substr);

	ret_ft_substr = ft_substr(str, 0, 0);
//	printf("ret_ft_substr -> %s\n", ret_ft_substr);
	if (!strcmp("", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	free(ret_ft_substr);

	ret_ft_substr = ft_substr(str_null, 0, 4);
//	printf("ret_ft_substr -> %s\n", ret_ft_substr);
	if (!strcmp("", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 6);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 6);
	free(ret_ft_substr);

	ret_ft_substr = ft_substr(str, 0, 11);
//	printf("ret_ft_substr -> %s\n", ret_ft_substr);
	if (!strcmp("Hello world", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 7);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 7);
	free(ret_ft_substr);
	return (0);
}
