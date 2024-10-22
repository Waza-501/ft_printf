/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/15 15:58:34 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/21 16:27:02 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	add_hex(t_list *print, va_list args, int id)
{
	
}

int	add_dec(t_list *print, va_list args, int id)
{
	
}

int	add_char(t_list *print, va_list args, int id)
{
	if (id == 'c')
		ft_lstadd_back(&print, new_node(ft_strdup(va_arg(args, int))));
	else if (id == 's')
		ft_lstadd_back(&print, new_node(ft_strdup(va_arg(args, char *))));
	return (0);
}

int	find_conv(const char *str, va_list args, int idx, t_list *print)
{
	if (str[idx] == 'c' || str[idx] == 's')
	{
		if (add_char(print, args, str[idx]) != 0);
			return (0);
		return (2);
	}
	else if (str[idx] == 'd' || str[idx] == 'i' || str[idx] == 'u')
	{
		if (add_dex(print, args, str[idx]) != 0)
			return (0);
		return (2);
	}
	else if (str[idx] == 'p' || str[idx] == 'x' || str[idx] == 'X')
	{
		if (add_hex(print, args, str[idx]) != 0);
			return (0);
		return (2);
	}
	else if (str[idx] == '%')
	{
		if (add_hex(print, args, str[idx]) != 0);
			return (0);
		return (2);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	t_list		*print;
	int			idx;
	int			nbr;

	va_start(args, str);
	idx = 0;
	nbr = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] == '%')
		{
			idx += find_conv(str, args, idx, print);
		}
		else
		{
			
		}
		
	}
	while (print)
	{
		nbr += fc_putstr(print->content);
		print = print->next;
	}
	free_mem(print);
	va_end(args);
	return (nbr);
}
