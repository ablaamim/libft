#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str0[13] = "Hello world!";
	char	str1[5] = "42sp";
	char	*ret_str0;
	char	*ret_str1;


	ret_str0 = strdup(str0);
	ret_str1 = ft_strdup(str0);
	if (!strcmp(str0, ret_str1) && !strcmp(ret_str0, ret_str1))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(ret_str0);
	free(ret_str1);

	ret_str0 = strdup(str1);
	ret_str1 = ft_strdup(str1);
	if (!strcmp(str1, ret_str1) && !strcmp(ret_str0, ret_str1))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(ret_str0);
	free(ret_str1);
	return (0);
}
