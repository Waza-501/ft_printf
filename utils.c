/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 16:02:03 by owen          #+#    #+#                 */
/*   Updated: 2024/10/25 12:57:48 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

size_t	ft_strsrc(char *str)
{
	size_t	size;

	size = 0;
	while (str[size] != '%' && str[size] != '\0')
		size++;
	return (size);
}

size_t	ft_strlen(char *str)
{
	size_t	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
