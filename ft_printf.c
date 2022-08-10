/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 20:43:40 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/10 16:53:17 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

size_t	ft_strlen(const	char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

static int specifier(char *string, size_t size)
{	
	if (string[size] != '%')
		return (NULL);
	size++;
	if (string[size] == 'c')
		return (NULL);
	return (NULL);
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
		// while (size_error != size)
		// {
		// 	ft_putchar_fd(error[size], 1);
		// 	size++;
		// }
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
