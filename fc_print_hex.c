/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_hex.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/29 11:27:06 by owen          #+#    #+#                 */
/*   Updated: 2024/10/30 13:31:19 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_conv(unsigned int hex, int mod)
{
	int				size;
	unsigned int	nbr;

	size = 0;
	nbr = hex / 16;
	if (hex > 15)
	{
		size += hex_conv((hex % 16), mod);
	}
	if (hex < 10)
		size += fc_putchar(hex + '0');
	else
		size += fc_putchar(hex + '0' + mod);
	return (size);
}

int	fc_print_hex(unsigned int hex, int id)
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
