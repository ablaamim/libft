#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	char	*ret_strnstr;
	char	*ret_ft_strnstr;
	char	str0[] = {"Hello world!"};
	char	str1[] = {"world"};
	char	str2[] = {"42 São Paulo"};
	char	str3[] = {"help"};

	ret_strnstr = strnstr(str0, str1, 5);
	ret_ft_strnstr = ft_strnstr(str0, str1, 5);
//	printf("ret_strnstr -> %s\nret_ft_strncmp -> %s\n", ret_strnstr, ret_ft_strnstr);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

	ret_strnstr = strnstr(str0, str1, 13);
	ret_ft_strnstr = ft_strnstr(str0, str1, 13);
//	printf("ret_strnstr -> %s\nret_ft_strncmp -> %s\n", ret_strnstr, ret_ft_strnstr);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);

	ret_strnstr = strnstr(str2, str3, 0);
	ret_ft_strnstr = ft_strnstr(str2, str3, 0);
//	printf("ret_strnstr -> %s\nret_ft_strncmp -> %s\n", ret_strnstr, ret_ft_strnstr);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);

	ret_strnstr = strnstr(str2, str3, 100);
	ret_ft_strnstr = ft_strnstr(str2, str3, 100);
//	printf("ret_strnstr -> %s\nret_ft_strncmp -> %s\n", ret_strnstr, ret_ft_strnstr);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);

	ret_strnstr = strnstr(str0, str1, -5);
	ret_ft_strnstr = ft_strnstr(str0, str1, -5);
//	printf("ret_strnstr -> %s\nret_ft_strncmp -> %s\n", ret_strnstr, ret_ft_strnstr);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	return (0);
}
