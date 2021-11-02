#include "../libft.h"
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	char	str2[4] = "";
	char	str3[4] = "";
	int		arr0[5] = {1, 2, 3, 4, 5};
	int		arr1[5] = {1, 2, 3, 4, 5};
	int		index;

	index =0;
	bzero(str0, 13);
	ft_bzero(str1, 13);
	while (index < 13)
	{
		if (str0[index] != str1[index])
			break ;
		++index;
	}
	if (index == 13)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

	index =0;
	bzero(str2, 1);
	ft_bzero(str3, 1);
	while (index < 1)
	{
		if (str2[index] != str3[index])
			break ;
		++index;
	}
	if (index == 1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	
	index =0;
	bzero(arr0, 4 * sizeof(*arr0));
	ft_bzero(arr1, 4 * sizeof(*arr1));
	while (index < 5)
	{
		// printf("arr0[%d] -> %d\narr1[%d] -> %d\n", \
		// 		index, arr0[index], \
		// 		index, arr1[index]);
		if (arr0[index] != arr1[index])
			break ;
		++index;
	}
	if (index == 5)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	return (0);
}
