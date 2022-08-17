/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 20:43:40 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 18:45:20 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>

int	specifier(const char *string, va_list arg)
{	
	int		size;
	int		id;

	size = 0;
	if (!string)
		return (0);
	id = string[size];
	if (string[size] == 'c' || string[size] == '%')
		size += print_cha(va_arg(arg, int), id);
	else if (string[size] == 's')
		size += print_str(va_arg(arg, char *));
	else if (string[size] == 'p' || string[size] == 'x' || string[size] == 'X')
		size += print_hex(va_arg(arg, unsigned long), id);
	else if (string[size] == 'd' || string[size] == 'i')
		size += fc_putnbr(va_arg(arg, int));
	else if (string[size] == 'u')
		size += print_dec(va_arg(arg, unsigned int));
	else
		return (-1);
	return (size);
}

int	ft_printf(const char *string, ...)
{
	int					size;
	va_list				arg;

	size = 0;
	va_start(arg, string);
	while (*string)
	{
		if (*string == '%')
		{
			string++;
			size += specifier(string, arg);
			if (size < 0)
				return (size);
		}
		else
		{
			fc_putchar(*string);
			size++;
		}
		string++;
	}
	return (size);
}
