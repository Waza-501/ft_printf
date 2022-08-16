/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_p.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 15:00:02 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/16 20:45:53 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_converter(unsigned long dec)
{
	unsigned int	hex;
	int	size;

	size = 0;
	hex = (dec % 16);
	if (dec > 15)
		size += hex_converter(dec / 16);
	if (hex < 10)
		hex += 48;
	else
		hex += 87;
	ft_putchar_fd(hex, 1);
	size++;
	return (size);
}

int	print_p(unsigned long dec)
{
	int	size;

	size = 0;
	ft_putstr_fd("0x", 1);
	size += 2;
	size += hex_converter(dec);
	return (size);
}