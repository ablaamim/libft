#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str0[13] = "Hello world!";
	char	str1[4] = "";
	int		arr0[5] = {1, 2, 3, 4, 5};
	char	*ptr_str0;
	char	*ptr_str1;
	int		*ptr_arr0;
	int		*ptr_arr1;

	ptr_str0 = memchr(str0, 'l', 2);
	ptr_str1 = ft_memchr(str0, 'l', 2);
	if (ptr_str0 == ptr_str1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

	ptr_str0 = memchr(str0, 'u', 20);
	ptr_str1 = ft_memchr(str0, 'u', 20);
	if (ptr_str0 == ptr_str1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);

	ptr_str0 = ft_memchr(str1, 'j', 3);
	ptr_str1 = memchr(str1, 'j', 3);
	if (ptr_str0 == ptr_str1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);

	ptr_str0 = ft_memchr(str1, '\0', 3);
	ptr_str1 = memchr(str1, '\0', 3);
	if (ptr_str0 == ptr_str1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);

	ptr_arr0 = memchr(arr0, 5, 3 * (sizeof(*arr0)));
	ptr_arr1 = ft_memchr(arr0, 5, 3 * (sizeof(*arr0)));
	if (ptr_arr0 == ptr_arr1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);

	ptr_arr0 = memchr(arr0, 5, 40 * (sizeof(*arr0)));
	ptr_arr1 = ft_memchr(arr0, 5, 40 * (sizeof(*arr0)));
	if (ptr_arr0 == ptr_arr1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	return (0);
}
