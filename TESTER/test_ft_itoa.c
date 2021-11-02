#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*ret_itoa;

	ret_itoa = ft_itoa(-2147483648);
//	printf("ret_itoa -> %s\n", ret_itoa);
	if (!strcmp(ret_itoa, "-2147483648"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(ret_itoa);

	ret_itoa = ft_itoa(2147483647);
//	printf("ret_itoa -> %s\n", ret_itoa);
	if (!strcmp(ret_itoa, "2147483647"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(ret_itoa);

	ret_itoa = ft_itoa(0);
//	printf("ret_itoa -> %s\n", ret_itoa);
	if (!strcmp(ret_itoa, "0"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	free(ret_itoa);

	ret_itoa = ft_itoa(-1234);
//	printf("ret_itoa -> %s\n", ret_itoa);
	if (!strcmp(ret_itoa, "-1234"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	free(ret_itoa);

	ret_itoa = ft_itoa(1234);
//	printf("ret_itoa -> %s\n", ret_itoa);
	if (!strcmp(ret_itoa, "1234"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	free(ret_itoa);

	return (0);
}
