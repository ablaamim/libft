#include "../libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t	ret_strlen;
	size_t	ret_ft_strlen;
	int		index;
	char	*my_test_list[10] = { "Hello world", "A", "", "\0Hello", "42 São Paulo", "\n", "\nã", "ã", "1\t 2\r 3\n testing", "42"};

	index = 0;
	while (index < 10)
	{
		ret_strlen = strlen(my_test_list[index]);
		ret_ft_strlen = ft_strlen(my_test_list[index]);
		if (ret_strlen == ret_ft_strlen)
			printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
		else
			printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
		++index;
	}
	return (0);
}
