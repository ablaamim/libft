#include "../libft.h"
#include <stdio.h>

void	ft_striteri_ft(unsigned int	i, char	*c)
{
	*c = *c + i;
}

int	main(void)
{
	char	str0[] = "Hello world";
	char	str1[] = "42 São Paulo";
	char	str2[] = "";
	char	str3[] = "0000000000";
	char	str4[] = "0000000000";

	ft_striteri(str0, ft_striteri_ft);
	ft_striteri(str1, ft_striteri_ft);
	ft_striteri(str2, ft_striteri_ft);
	ft_striteri(str3, ft_striteri_ft);
	ft_striteri(str4, 0);
	printf("%s\n", str0);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	/*
	if (1)
		printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
	*/
	return (0);
}
