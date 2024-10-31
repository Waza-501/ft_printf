#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int				test;
	char			*string;
	unsigned int	nul;
	long int		testl;

	testl = LONG_MAX;
	nul = NULL;
	test = 1234567890;
	string = "0";
	printf("%u\n", NULL);
	ft_printf("%u\n", NULL);
	printf("%d\n", printf("%i%d%c%%%s%p%x%X%u\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	ft_printf("%d\n", ft_printf("%i%d%c%%%s%p%x%X%u\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	printf("%d\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42));
	printf("%d\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42));
	printf("%d\n", printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
	ft_printf("%d\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42));
	ft_printf("%d\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42));
	ft_printf("%d\n", ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0));
}