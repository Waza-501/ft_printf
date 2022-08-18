/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_breaker.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 16:11:18 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/18 09:23:24 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	int		test;
	char 	*string;

	test = 1234567890;
	string = "Hello there";
	printf("%d\n", printf("%%\aaa%%\n"));
	ft_printf("%d\n", ft_printf("%%\aaa%%\n"));
	printf("%d\n", printf("%s\n", string));
	ft_printf("%d\n", ft_printf("%s\n", string));
	printf("%d\n", ft_printf("%i\n", test));
	ft_printf("%d\n", printf("%i\n", test));
}
