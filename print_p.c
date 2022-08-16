/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_p.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 15:00:02 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/16 18:36:25 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	hex_converter(unsigned long int dec)
{
	int	hex;
	int	size;

	size = 0;
	hex = (dec % 16);
	if (dec > 15)
		size += hex_converter(dec / 16);
	else
	{
		if (hex < 10)
			hex += '0';
		if (hex > 10)
			hex += 'a';
	}
	printf("%x", hex);
	ft_putchar_fd(hex, 1);
	size++;
	return (size);
}

int	print_p(unsigned long int dec)
{
	int	size;

	size = 0;
	ft_putstr_fd("0x", 1);
	size += 2;
	size += hex_converter(dec);
	return (size);
}