#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	int		ret_strncmp;
	int		ret_ft_strncmp;
	char	str0[] = {"Hello world!"};
	char	str1[] = {"Hello world"};
	char	str2[] = {"42 São Paulo"};
	char	str3[] = {"Can I help you?"};

	ret_strncmp = strncmp(str0, str1, 5);
	ret_ft_strncmp = ft_strncmp(str0, str1, 5);
//	printf("ret_strncmp -> %d\nret_ft_strncmp -> %d\n", ret_strncmp, ret_ft_strncmp);
	if (ret_strncmp == ret_ft_strncmp)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

	ret_strncmp = strncmp(str0, str1, 13);
	ret_ft_strncmp = ft_strncmp(str0, str1, 13);
//	printf("ret_strncmp -> %d\nret_ft_strncmp -> %d\n", ret_strncmp, ret_ft_strncmp);
	if (ret_strncmp == ret_ft_strncmp)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);

	ret_strncmp = strncmp(str2, str3, 0);
	ret_ft_strncmp = ft_strncmp(str2, str3, 0);
//	printf("ret_strncmp -> %d\nret_ft_strncmp -> %d\n", ret_strncmp, ret_ft_strncmp);
	if (ret_strncmp == ret_ft_strncmp)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);

	ret_strncmp = strncmp(str2, str3, 100);
	ret_ft_strncmp = ft_strncmp(str2, str3, 100);
//	printf("ret_strncmp -> %d\nret_ft_strncmp -> %d\n", ret_strncmp, ret_ft_strncmp);
	if (ret_strncmp == ret_ft_strncmp)
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);

	ret_strncmp = strncmp(str0, str1, -5);
	ret_ft_strncmp = ft_strncmp(str0, str1, -5);
//	printf("ret_strncmp -> %d\nret_ft_strncmp -> %d\n", ret_strncmp, ret_ft_strncmp);
	if (ret_strncmp == ret_ft_strncmp)
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	return (0);
}
