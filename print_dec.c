/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_dec.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 11:59:42 by owen          #+#    #+#                 */
/*   Updated: 2022/08/17 20:59:11 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_dec(unsigned int dec)
{
	int					size;
	unsigned int		ret;

	size = 0;
	ret = (dec % 10);
	if (dec > 9)
		size += print_dec(dec / 10);
	fc_putchar((ret + '0'));
	return (size);
}
