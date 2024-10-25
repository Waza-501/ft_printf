/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/15 15:58:34 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/25 12:59:35 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	find_conv(const char *str, va_list args, int idx)
{
	if (str[idx] == 'c')
		return (fc_putchar(va_arg(args, int)));
	else if (str[idx] == 's')
		return (fc_putstr(va_arg(args, char *)));
	else if (str[idx] == 'p')
		return (fc_putpnt(va_arg(args, void *)));
	else if (str[idx] == 'd')
		return (fc_print_dec(va_arg(args, int)));
	else if (str[idx] == 'i')
		return (fc_print_int(va_arg(args, int)));
	else if (str[idx] == 'u')
		return (fc_print_uns(va_arg(args, unsigned int)));
	else if (str[idx] == 'x')
		return (fc_print_hex(va_arg(args, unsigned int), 0));
	else if (str[idx] == 'X')
		return (fc_print_hex(va_arg(args, unsigned int), 1));
	else if (str[idx] == '%')
		return (fc_putchar('%'));
	return (0);
}

/*need to change this to print until it finds
a specifier,but for now, this works*/
int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			nbr;

	va_start(args, str);
	nbr = 0;
	while (*str)
	{
		if (*str == '%' && *str++ != '\0')
		{
			nbr += find_conv(str, args, 0);
			str++;
		}
		else if (*str != '\0')
		{
			nbr += write(1, str, 1);
		}
		str++;
	}
	va_end(args);
	return (nbr);
}
