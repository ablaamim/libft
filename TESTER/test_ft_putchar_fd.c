#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	ft_putchar_fd(-1, -1);
	ft_putchar_fd(-1, 0);
	ft_putchar_fd(0, -1);
	ft_putchar_fd(0, 0);
	ft_putchar_fd('e', 0);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('e', 2);
/*
	if (1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
*/
	return (0);
}
