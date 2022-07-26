/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 20:43:40 by ohearn        #+#    #+#                 */
/*   Updated: 2022/07/26 12:36:48 by owen          ########   odam.nl         */
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

int		ft_printf(const char *string, ...)
{
	size_t			size;
	int				placeholder;
	va_list	arguments;
	
	size = 0;
	placeholder = 1;
	va_start(arguments, string);

	if (!ft_isascii(string[placeholder]))
		return (0);
	else
		while (ft_strlen(string) != size)
		{
			ft_putchar_fd(string[size], 1);
			size++;
		}
	return (0);
}

int	main()
{
	printf("Test, hello there\n");
	ft_printf("Selftest, hello there\n");
}