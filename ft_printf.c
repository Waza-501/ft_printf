/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/15 15:58:34 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/17 19:07:29 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	fc_putchar(char c)
{
	return (write(1, &c, 1));
}

int	find_conv(const char *str, va_list args, int idx)
{
	int	nbr;

	nbr = 0;
	if (str[idx] == 'c')
		nbr += fc_putchar(va_arg(args, int));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			idx;
	int			nbr;

	va_start(args, str);
	idx = 0;
	nbr = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] == '%')
		{
			idx++;
			nbr += find_conv(str, args, idx);
			idx++;
		}
		else if (str[idx] != '%')
		{
			nbr += write(1, &str[idx], 1);
			idx++;
		}
	}
	va_end(args);
	return (nbr);
}
