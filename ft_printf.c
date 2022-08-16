/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 20:43:40 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/13 21:33:28 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

static int specifier(const char *string, size_t size)
{	
	if (string[size] != '%')
		return (0);
	size++;
	if (string[size] == 'c')
	{
		size++;
		write (1, string[size], 1);
	}
	return (0);
}

int	ft_printf(const char *string, ...)
{
	size_t			size;
	size_t			size_error;
	va_list			arguments;
	char			*error;

	size = 0;
	error = "Try again";
	size_error = ft_strlen(error);
	va_start(arguments, string);
	if (string[size] == '%')
	{	
		specifier(string, size);
		while (size_error != size)
		{
			ft_putchar_fd(error[size], 1);
			size++;
		}
		write(1, "\n", 1);
	}
	else
	{
		while (ft_strlen(string) != size)
		{
			ft_putchar_fd(string[size], 1);
			size++;
		}
	}
	return (0);
}
