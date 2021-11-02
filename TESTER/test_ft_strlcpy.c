#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	char	str2[5] = "42sp";
	char	str3[5] = "42sp";
	size_t	ret_str0;
	size_t	ret_str1;
	// size_t	ret_str2;
	// size_t	ret_str3;

	ret_str0 = strlcpy(str0, (str0 + 6), 0);
	ret_str1 = ft_strlcpy(str1, (str1 + 6), 0);
	// printf("str0 -> %s\nstr1 -> %s\n", str0, str1);
	// printf("ret_str0 -> %zu\nret_str1 -> %zu\n", ret_str0, ret_str1);
	if (!strcmp(str0, str1) && ret_str0 == ret_str1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

	ret_str0 = strlcpy(str0, (str0 + 6), 5);
	ret_str1 = ft_strlcpy(str1, (str1 + 6), 5);
	// printf("str0 -> %s\nstr1 -> %s\n", str0, str1);
	// printf("ret_str0 -> %zu\nret_str1 -> %zu\n", ret_str0, ret_str1);
	if (!strcmp(str0, str1) && ret_str0 == ret_str1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);

	// ret_str2 = strlcpy(str2, (str2 + 1), 10);
	// ret_str3 = ft_strlcpy(str3, (str3 + 1), 10);
	// // printf("str2 -> %s\nstr3 -> %s\n", str2, str3);
	// // printf("ret_str2 -> %zu\nret_str3 -> %zu\n", ret_str2, ret_str3);
	// if (!strcmp(str2, str3) && ret_str2 == ret_str3)
	// 	printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	// else
	// 	printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	
	// ret_str2 = strlcpy(str2 + 1, str2, 10);
	// ret_str3 = ft_strlcpy(str3 + 1, str3, 10);
	// printf("str2 -> %s\nstr3 -> %s\n", str2, str3);
	// printf("ret_str2 -> %zu\nret_str3 -> %zu\n", ret_str2, ret_str3);
	// if (!strcmp(str2, str3) && ret_str2 == ret_str3)
	// 	printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	// else
	// 	printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	return (0);
}
