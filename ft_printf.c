/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 20:43:40 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/16 20:14:46 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

int	specifier(const char *string, va_list arg)
{	
	int		size;
	char	*str;

	size = 0;
	if (string[size] == 'c' || string[size] == 'd')
	{
		ft_putchar_fd(va_arg(arg, int), 1);
		size++;
	}
	else if (string[size] == 's')
	{
		str = va_arg(arg, char *);
		if (!str)
			return (0);
		ft_putstr_fd(str, 1);
		size++;
	}
	else if (string[size] == 'p')
	{
		size = print_p(va_arg(arg, unsigned long));
	}
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
