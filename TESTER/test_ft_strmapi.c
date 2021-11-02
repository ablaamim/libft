#include "../libft.h"
#include <stdio.h>

char	ft_strmapi_ft(unsigned int	i, char	c)
{
	return (c + i);
}

int	main(void)
{
	char	str0[] = "Hello world";
	char	str1[] = "42 São Paulo";
	char	str2[] = "";
	char	str3[] = "0000000000";

	printf("%s\n", ft_strmapi(str0, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str1, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str2, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str3, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(0, ft_strmapi_ft));
	/*
	if (1)
		printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
	*/
	return (0);
}
