/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_print_pnt.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 12:32:05 by owen          #+#    #+#                 */
/*   Updated: 2024/10/31 13:15:18 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_print_pnt(unsigned long pnt)
{
	int				size;
	unsigned long	nbr;

	size = 0;
	nbr = (pnt % 16);
	if (pnt > 15)
		size += fc_print_pnt(pnt / 16);
	if (nbr < 10)
		size += fc_putchar((nbr + '0'));
	else
		size += fc_putchar((nbr + 87));
	return (size);
}

int	fc_putpnt(void *pnt)
{
	int	size;

	size = 0;
	if (!pnt)
	{
		size += write(1, "(nil)", 5);
		return (size);
	}
	size = write(1, "0x", 2);
	size += fc_print_pnt((unsigned long)pnt);
	return (size);
}
