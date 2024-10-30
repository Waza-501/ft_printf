/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_print_int.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 17:01:36 by owen          #+#    #+#                 */
/*   Updated: 2024/10/25 15:55:40 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	conversion(int nbr)
{
	int	size;
	int	remain;

	size = 0;
	remain = (nbr % 10);
	if (nbr > 9)
		size += conversion(nbr / 10);
	size += fc_putchar(remain + '0');
	return (size);
}

int	fc_print_int(int nbr)
{
	int	size;

	size = 0;
	if (nbr == INT_MIN)
	{
		size += write(1, "-2147483648", 12);
		return (size);
	}
	else if (nbr == 48)
	{
		size += write(1, "0", 2);
		return (size);
	}
	else if (nbr < 0)
	{
		size += write(1, "-", 2);
		nbr *= -1;
	}
	size += conversion(nbr);
	return (size);
}
