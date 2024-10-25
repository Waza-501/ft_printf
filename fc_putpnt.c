/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putpnt.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 12:25:10 by owen          #+#    #+#                 */
/*   Updated: 2024/10/25 12:57:14 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_putpnt(void *pnt)
{
	int	size;

	size = write(1, "0x", 2);
	size += fc_print_hex((unsigned long)pnt, 0);
	return (size);
}
