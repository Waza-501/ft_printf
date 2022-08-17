/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hex.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/16 15:00:02 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 15:32:24 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_converter(unsigned long dec, int modif)
{
	unsigned int	hex;
	int				size;

	size = 0;
	hex = (dec % 16);
	if (dec > 15)
		size += hex_converter(dec / 16, modif);
	if (hex < 10)
		hex += 48;
	else
		hex += (55 + modif);
	ft_putchar_fd(hex, 1);
	size++;
	return (size);
}

int	print_hex(unsigned long dec, int id)
{
	int	size;
	int	modif;

	size = 0;
	modif = 0;
	if (id == 'p')
	{
		ft_putstr_fd("0x", 1);
		size += 2;
	}
	if (id == 'p' || id == 'x')
		modif += 32;
	size += hex_converter(dec, modif);
	return (size);
}
