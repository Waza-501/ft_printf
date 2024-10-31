/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_print_uns.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 14:12:38 by owen          #+#    #+#                 */
/*   Updated: 2024/10/31 13:02:29 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_print_uns(unsigned long dec)
{
	int				size;
	unsigned long	nbr;

	size = 0;
	nbr = (dec % 10);
	if (dec > 9)
		size += fc_print_uns(dec / 10);
	size += fc_putchar((nbr + '0'));
	return (size);
}
