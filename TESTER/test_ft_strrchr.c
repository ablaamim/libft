#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*ret_strrchr;
	char	*ret_ft_strrchr;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', 'z', '%', '\n', '\0', '0', 'Z', '\r'};
	char	str[13] = {"Hello world!"};

	index = 0;
	while (index < 10)
	{
		ret_strrchr = strrchr(str, my_test_list[index]);
		ret_ft_strrchr = ft_strrchr(str, my_test_list[index]);
		if (ret_strrchr == ret_ft_strrchr)
			printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
		else
			printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
		++index;
	}
	return (0);
}
