#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		ret_isprint;
	int		ret_ft_isprint;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', 127, '%', '\n', '\0', '0', 'Z', '\r'};

	index = 0;
	while (index < 10)
	{
		ret_isprint = isprint(my_test_list[index]);
		ret_ft_isprint = ft_isprint(my_test_list[index]);
		if (ret_isprint == ret_ft_isprint)
			printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
		else
			printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
		++index;
	}
	return (0);
}
