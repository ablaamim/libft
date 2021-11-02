#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[18] = "Hello world Hello";
	char	*ret_str;

	ret_str = ft_strtrim(str, "Hello");
	// printf("ret_str -> %s\nlength -> %zu\n", ret_str, ft_strlen(ret_str));
	if (!strcmp(" world ", ret_str))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(ret_str);

	ret_str = ft_strtrim(str, "H");
	// printf("ret_str -> %s\n", ret_str);
	if (!strcmp(ret_str, "ello world Hello"))
 		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);

	ret_str = ft_strtrim(str, "");
	// printf("ret_str -> %s\nlength -> %zu\n", ret_str, ft_strlen(ret_str));
	if (!strcmp(str, ret_str))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	free(ret_str);

	ret_str = ft_strtrim(str, "abc");
	// printf("ret_str -> %s\n", ret_str);
	if (!strcmp(ret_str, str))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	return (0);
}
