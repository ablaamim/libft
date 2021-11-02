#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		ret_tolower;
	int		ret_ft_tolower;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', 'z', '%', '\n', '\0', '0', 'Z', '\r'};

	index = 0;
	while (index < 10)
	{
		ret_tolower = tolower(my_test_list[index]);
		ret_ft_tolower = ft_tolower(my_test_list[index]);
		if (ret_tolower == ret_ft_tolower)
			printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
		else
			printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
		++index;
	}
	return (0);
}
