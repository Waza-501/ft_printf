/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_breaker.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 16:11:18 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 21:07:47 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	int		test;

	test = 1234567890;
	printf("%%%%a%%aaa%%\n");
	ft_printf("%%%%a%%aaa%%\n");
	printf("%d\n", ft_printf("%i\n", test));
	printf("%d\n", printf("%i\n", test));
}
