/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_print_dec.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 14:12:38 by owen          #+#    #+#                 */
/*   Updated: 2024/10/25 12:56:38 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_print_dec(unsigned int dec)
{
	int				size;
	unsigned int	nbr;

	size = 0;
	nbr = (dec % 10);
	if (dec > 9)
		fc_print_dec(nbr / 10);
	size += fc_putchar((nbr + '0'));
	return (size);
}
