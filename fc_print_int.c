/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_print_int.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 17:01:36 by owen          #+#    #+#                 */
/*   Updated: 2024/10/25 11:10:36 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_print_int(int nbr)
{
	int size;

	size = 0;
	if (nbr < 9)
		size += fc_putchar((nbr + '0'));
	else
	{
		size += fc_print_int(nbr / 10);
		size += fc_putchar((nbr % 10 + '0'));
	}
	return (size);
}