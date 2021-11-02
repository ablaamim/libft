#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	char	str2[4] = "";
	char	str3[4] = "";
	int		arr0[5] = {1, 2, 3, 4, 5};
	int		arr1[5] = {1, 2, 3, 4, 5};
	char	*ptr_str0;
	char	*ptr_str1;
	char	*ptr_str2;
	char	*ptr_str3;
	int		*ptr_arr0;
	int		*ptr_arr1;
	int		index;

	ptr_str0 = memcpy(str0, str0 + 6, 0);
	ptr_str1 = ft_memcpy(str1, str1 + 6, 0);
	// printf("str0 -> %s\nstr1 -> %s\n", str0, str1);
	// printf("ptr_str0 -> %s\nptr_str1 -> %s\n", ptr_str0, ptr_str1);
	if (!strcmp(str0, str1) && !strcmp(ptr_str0, ptr_str1))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

	ptr_str0 = memcpy(str0, str0 + 6, 0);
	ptr_str1 = ft_memcpy(str1, str1 + 6, 0);
	// printf("str0 -> %s\nstr1 -> %s\n", str0, str1);
	// printf("ptr_str0 -> %s\nptr_str1 -> %s\n", ptr_str0, ptr_str1);
	if (!strcmp(str0, str1) && !strcmp(ptr_str0, ptr_str1))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);

	ptr_str2 = ft_memcpy(str2, str2 + 4, 3);
	ptr_str3 = memcpy(str3, str3 + 4, 3);
	// printf("str2 -> %s\nstr3 -> %s\n", str2, str3);
	// printf("ptr_str2 -> %s\nptr_str3 -> %s\n", ptr_str2, ptr_str3);
	if (!strcmp(str2, str3) && !strcmp(ptr_str2, ptr_str3))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	
	index =0;
	ptr_arr0 = memcpy(arr0, arr0 + 2, 3 * sizeof(*arr0));
	ptr_arr1 = ft_memcpy(arr1, arr1 + 2, 3 * sizeof(*arr1));
	while (index < 5)
	{
		// printf("arr0[%d] -> %d\narr1[%d] -> %d\n", \
		// 		index, arr0[index], \
		// 		index, arr1[index]);
		// printf("ptr_arr0[%d] -> %d\nptr_arr1[%d] -> %d\n", \
		// 		index, ptr_arr0[index], \
		// 		index, ptr_arr1[index]);
		if ((arr0[index] != arr1[index]) \
			&& (ptr_arr0[index] != ptr_arr1[index]))
			break ;
		++index;
	}
	if (index == 5)
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);

	index =0;
	ptr_arr0 = memcpy(arr0, arr0 + 2, 1);
	ptr_arr1 = ft_memcpy(arr1, arr1 + 2, 1);
	while (index < 5)
	{
		// printf("arr0[%d] -> %d\narr1[%d] -> %d\n", \
		// 		index, arr0[index], \
		// 		index, arr1[index]);
		// printf("ptr_arr0[%d] -> %d\nptr_arr1[%d] -> %d\n", \
		// 		index, ptr_arr0[index], \
		// 		index, ptr_arr1[index]);
		if ((arr0[index] != arr1[index]) \
			&& (ptr_arr0[index] != ptr_arr1[index]))
			break ;
		++index;
	}
	if (index == 5)
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	return (0);
}
