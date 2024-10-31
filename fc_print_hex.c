/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 11:27:06 by owen          #+#    #+#                 */
/*   Updated: 2024/10/31 13:21:05 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_conv(unsigned long hex, int mod)
{
	int				size;
	unsigned long	nbr;

	size = 0;
	nbr = (hex % 16);
	if (hex > 15)
	{
		size += hex_conv((hex / 16), mod);
	}
	if (nbr < 10)
		size += fc_putchar(nbr + '0');
	else
		size += fc_putchar(nbr + (55 + mod));
	return (size);
}

int	fc_print_hex(unsigned long hex, int id)
{
	int				mod;
	int				size;

	mod = 0;
	size = 0;
	if (id == 'x')
		mod = 32;
	size += hex_conv(hex, mod);
	return (size);
}
