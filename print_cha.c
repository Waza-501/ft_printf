/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_cha.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 15:35:55 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 18:45:00 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_cha(char string, int c)
{
	int	size;

	size = 0;
	if (c == 'c')
		size = fc_putchar(string);
	if (c == '%')
		size = fc_putchar('%');
	size++;
	return (size);
}
