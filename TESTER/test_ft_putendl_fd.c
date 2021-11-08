#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	ft_putendl_fd(0, -1);
	ft_putendl_fd(0, 0);
	ft_putendl_fd("Hello world", 0);
	ft_putendl_fd("Hello world", 1);
	ft_putendl_fd("Hello world", 2);
/*
	if (1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
*/
	return (0);
}
