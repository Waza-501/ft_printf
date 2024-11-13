/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_print_pnt.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 12:32:05 by owen          #+#    #+#                 */
/*   Updated: 2024/11/07 13:21:34 by owhearn       ########   odam.nl         */
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

int	fc_putpnt(uintptr_t *ptr)
{
	int	size;

	size = 0;
	if (!ptr)
	{
		size += write(1, "(nil)", 5);
		return (size);
	}
	size = write(1, "0x", 2);
	size += fc_print_pnt((unsigned long)ptr);
	return (size);
}
