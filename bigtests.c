#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

void	dec_tests(void)
{
	int				test_4;
	int				test_5;
	unsigned int	test_6;

	test_4 = 0;
	test_5 = -2183648;
	test_6 = 4294967290;
	printf("%d\n", printf("%d\n", test_4));
	ft_printf("%d\n", ft_printf("%d\n", test_4));
	printf("%d\n", printf("%i\n", test_5));
	ft_printf("%d\n", ft_printf("%i\n", test_5));
	printf("%d\n", printf("%u\n", test_6));
	ft_printf("%d\n", ft_printf("%u\n", test_6));
}

void	hex_tests(void)
{
	char	hex1;
	char	hex2;

	hex1 = 12345;
	hex2 = 12345;
	printf("%d\n", printf("%x\n%X\n", hex1, hex2));
	ft_printf("%d\n", ft_printf("%x\n%X\n", hex1, hex2));
}

int	main(void)
{
	char			*test;
	int				test_2;
	int				*test_3;

	test = "Test, hello there";
	test_2 = 'a';
	test_3 = &test_2;
	printf("Hello there, \n");
	ft_printf("this is a test.\n");
	printf("%s\n", test);
	ft_printf("%s\n", test);
	printf("%c\n", test_2);
	ft_printf("%c\n", test_2);
	printf("%p\n", test_3);
	ft_printf("%p\n", test_3);
	printf("\n\nDec test time\n\n");
	dec_tests();
	printf("%%\n");
	ft_printf("%%\n");
	printf("\n\nHex test time\n\n");
	hex_tests();
}