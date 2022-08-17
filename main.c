/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/10 15:56:35 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 12:43:59 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*test;
	int		test_2;
	int		*test_3;
	int		test_4;

	test = "Test, hello there";
	test_2 = '3';
	test_3 = &test_2;
	test_4 = 4294967295;
	printf("Hello there, \n");
	ft_printf("this is a test.\n");
	printf("%s\n", test);
	ft_printf("%s\n", test);
	printf("%c\n", test_2);
	ft_printf("%c\n", test_2);
	printf("%p\n", test_3);
	ft_printf("%p\n", test_3);
	printf("%d\n", test_4);
	ft_printf("%d\n", test_4);
}
