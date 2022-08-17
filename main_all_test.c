/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_all_test.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/10 15:56:35 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 21:31:33 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <string.h>
#include <stdio.h>

void	dec_tests(void)
{
	int				test_4;
	int				test_5;
	unsigned int	test_6;

	test_4 = 0;
	test_5 = -2147483648;
	test_6 = 4294967290;
	printf("%d\n", test_4);
	ft_printf("%d\n", test_4);
	printf("%i\n", test_5);
	ft_printf("%i\n", test_5);
	printf("%u\n", test_6);
	ft_printf("%u\n", test_6);
}

int	main(void)
{
	char			*test;
	int				test_2;
	int				*test_3;

	test = "Test, hello there";
	test_2 = '3';
	test_3 = &test_2;
	printf("Hello there, \n");
	ft_printf("this is a test.\n");
	printf("%s\n", test);
	ft_printf("%s\n", test);
	printf("%c\n", test_2);
	ft_printf("%c\n", test_2);
	printf("%p\n", test_3);
	ft_printf("%p\n", test_3);
	dec_tests();
	printf("%%\n");
	ft_printf("%%\n");
}
