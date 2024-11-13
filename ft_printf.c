/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/15 15:58:34 by owhearn       #+#    #+#                 */
/*   Updated: 2024/11/07 13:33:56 by owhearn       ########   odam.nl         */
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
		return (fc_putpnt(va_arg(args, uintptr_t *)));
	else if (str[idx] == 'd' || str[idx] == 'i')
		return (fc_print_int(va_arg(args, int)));
	else if (str[idx] == 'u')
		return (fc_print_uns(va_arg(args, unsigned int)));
	else if (str[idx] == 'x' || str[idx] == 'X')
		return (fc_print_hex(va_arg(args, unsigned int), str[idx]));
	else if (str[idx] == '%')
		return (fc_putchar('%'));
	return (0);
}

static int	print_else(const char *str, int i, t_data *data)
{
	int	size;

	size = ft_strsrc(&str[i]);
	data->count += write(1, &str[i], size);
	return (size);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	t_data		data;
	int			i;

	va_start(args, str);
	i = 0;
	ft_set_data(&data);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			data.count += find_conv(str, args, i + 1);
			i += 2;
		}
		else
			i += print_else(str, i, &data);
	}
	va_end(args);
	return (data.count);
}
