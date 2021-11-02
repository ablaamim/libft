#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		ret_atoi;
	int		ret_ft_atoi;
	char	str0[] = {"           -12342sp24321"};
	char	str1[] = {"           +12342sp24321"};
	char	str2[] = {"           --12342sp24321"};
	char	str3[] = {"           -+12342sp24321"};
	char	str4[] = {"           +-12342sp24321"};
	char	str5[] = {"           ++12342sp24321"};
	char	str6[] = {"  \t +-+-12342sp24321"};
	char	str7[] = {"-      12342sp24321"};
	char	str8[] = {"+      12342sp24321"};
	char	str9[] = {"-12342sp24321"};
	char	str10[] = {"+12342sp24321"};
	char	str11[] = {"	  \t sp12342sp24321"};
	char	str12[] = {"sp12342sp24321"};

	ret_atoi = atoi(str0);
	ret_ft_atoi = ft_atoi(str0);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);

	ret_atoi = atoi(str1);
	ret_ft_atoi = ft_atoi(str1);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);

	ret_atoi = atoi(str2);
	ret_ft_atoi = ft_atoi(str2);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);

	ret_atoi = atoi(str3);
	ret_ft_atoi = ft_atoi(str3);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);

	ret_atoi = atoi(str4);
	ret_ft_atoi = ft_atoi(str4);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);

	ret_atoi = atoi(str5);
	ret_ft_atoi = ft_atoi(str5);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 6);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 6);

	ret_atoi = atoi(str6);
	ret_ft_atoi = ft_atoi(str6);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 7);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 7);

	ret_atoi = atoi(str7);
	ret_ft_atoi = ft_atoi(str7);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 8);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 8);

	ret_atoi = atoi(str8);
	ret_ft_atoi = ft_atoi(str8);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 9);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 9);

	ret_atoi = atoi(str9);
	ret_ft_atoi = ft_atoi(str9);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 10);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 10);

	ret_atoi = atoi(str10);
	ret_ft_atoi = ft_atoi(str10);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 11);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 11);

	ret_atoi = atoi(str11);
	ret_ft_atoi = ft_atoi(str11);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 12);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 12);

	ret_atoi = atoi(str12);
	ret_ft_atoi = ft_atoi(str12);
//	printf("ret_atoi -> %d\nret_ft_strncmp -> %d\n", ret_atoi, ret_ft_atoi);
	if (ret_atoi == ret_ft_atoi)
		printf("\033[92mTest %2.i - OK \033[0m\n", 13);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 13);
	return (0);
}
