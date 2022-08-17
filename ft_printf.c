/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 20:43:40 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 15:55:51 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

int	specifier(const char *string, va_list arg)
{	
	int		size;
	int		id;

	size = 0;
	id = string[size];
	if (string[size] == 'c' || string[size] == '%')
		print_cha(va_arg(arg, int), id);
	else if (string[size] == 's')
		print_s(va_arg(arg, char *));
	else if (string[size] == 'p' || string[size] == 'x' || string[size] == 'X')
		size = print_hex(va_arg(arg, unsigned long), id);
	else if (string[size] == 'd' || string[size] == 'i')
	{
		ft_putnbr_fd(va_arg(arg, int), 1);
		size++;
	}
	else if (string[size] == 'u')
		print_dec(va_arg(arg, unsigned int));
	// else if (string[size] == '%')
	// {
	// 	ft_putchar_fd('%', 1);
	// 	size++;
	// }
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
			ft_putchar_fd(*string, 1);
			size++;
		}
		string++;
	}
	return (size);
}
