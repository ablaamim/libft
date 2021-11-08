#include "../libft.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_putnbr_fd(0, -1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 0);
	write(1, "\n", 1);
	ft_putnbr_fd(INT_MAX, 0);
	write(1, "\n", 1);
	ft_putnbr_fd(INT_MIN, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-1234, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(1234, 2);
	write(1, "\n", 1);
/*
	if (1)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
*/
	return (0);
}
