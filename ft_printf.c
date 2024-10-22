/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/15 15:58:34 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/22 13:09:54 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

// int	find_conv(const char *str, va_list args, int idx, t_list *print)
// {
// 	if (str[idx] == 'c' || str[idx] == 's')
// 	{
// 		if (add_char(print, args, str[idx]) != 0)
// 			return (0);
// 		return (2);
// 	}
// 	else if (str[idx] == 'd' || str[idx] == 'i' || str[idx] == 'u')
// 	{
// 		if (add_dex(print, args, str[idx]) != 0)
// 			return (0);
// 		return (2);
// 	}
// 	else if (str[idx] == 'p' || str[idx] == 'x' || str[idx] == 'X')
// 	{
// 		if (add_hex(print, args, str[idx]) != 0)
// 			return (0);
// 		return (2);
// 	}
// 	else if (str[idx] == '%')
// 	{
// 		if (add_hex(print, args, str[idx]) != 0)
// 			return (0);
// 		return (2);
// 	}
// 	return (0);
// }

char	*process_normal(t_list *lst, char *str)
{
	
}

void	split_source(t_list *lst, va_list args, const char *str)
{
	while (str)
	{
		if (str != '%')
		{
			process_normal(lst, str);
		}
		else if (str == '%' && is_specifier(str[1]))
		{

		}
		else if (str == '%' && is_specifier(str[1] != 0))
		{
			str++;
		}
	}
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	t_list		*print;
	int			nbr;

	va_start(args, str);
	nbr = 0;
	split_source(print, args, str);
	while (print)
	{
		nbr += fc_putstr(print->content);
		print = print->next;
	}
	free_mem(print);
	va_end(args);
	return (nbr);
}
