#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		ret_isdigit;
	int		ret_ft_isdigit;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', '*', '%', '\n', '\0', '0', 'Z', '\r'};

	index = 0;
	while (index < 10)
	{
		ret_isdigit = isdigit(my_test_list[index]);
		ret_ft_isdigit = ft_isdigit(my_test_list[index]);
		if (ret_isdigit == ret_ft_isdigit)
			printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
		else
			printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
		++index;
	}
	return (0);
}
