#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str0_dst[13] = "Hello";
	char	str0_src[7] = "world!";
	char	str1_dst[13] = "Hello";
	char	str1_src[7] = "world!";
	char	str2_dst[13] = "Hello";
	char	str2_src[7] = "world!";
	char	str3_dst[13] = "Hello";
	char	str3_src[7] = "world!";
	char	str4_dst[13] = "Hello";
	char	str4_src[7] = "world!";
	char	str5_dst[13] = "Hello";
	char	str5_src[7] = "world!";
	size_t	ret_str0;
	size_t	ret_str1;
	size_t	ret_str2;
	size_t	ret_str3;
	size_t	ret_str4;
	size_t	ret_str5;

	ret_str0 = strlcat(str0_dst, str0_src, 13);
	ret_str1 = ft_strlcat(str1_dst, str1_src, 13);
//	printf("str0 -> %s\nstr1 -> %s\n", str0_dst, str1_dst);
//	printf("ret_str0 -> %zu\nret_str1 -> %zu\n", ret_str0, ret_str1);
	if (!strcmp(str0_dst, str1_dst) && ret_str0 == ret_str1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

	ret_str2 = strlcat(str2_dst, str2_src, 3);
	ret_str3 = ft_strlcat(str3_dst, str3_src, 3);
//	printf("str2 -> %s\nstr3 -> %s\n", str2_dst, str3_dst);
//	printf("ret_str2 -> %zu\nret_str3 -> %zu\n", ret_str2, ret_str3);
	if (!strcmp(str2_dst, str3_dst) && ret_str2 == ret_str3)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);

	ret_str4 = strlcat(str4_dst, str4_src, 5);
	ret_str5 = ft_strlcat(str5_dst, str5_src, 5);
//	printf("str4 -> %s\nstr5 -> %s\n", str4_dst, str5_dst);
//	printf("ret_str4 -> %zu\nret_str5 -> %zu\n", ret_str4, ret_str5);
	if (!strcmp(str4_dst, str5_dst) && ret_str4 == ret_str5)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	return (0);
}
