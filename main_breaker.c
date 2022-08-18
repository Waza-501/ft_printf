/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_breaker.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 16:11:18 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/18 14:45:05 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int				test;
	char			*string;
	unsigned int	nul;

	nul = NULL;
	test = 1234567890;
	string = "0";
	printf("%u\n", NULL);
	ft_printf("%u\n", NULL);
	printf("%d\n", printf("%i%d%c%%%s%p%x%X%u\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	ft_printf("%d\n", ft_printf("%i%d%c%%%s%p%x%X%u\n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
}
