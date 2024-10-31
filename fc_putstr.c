/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 12:16:54 by owen          #+#    #+#                 */
/*   Updated: 2024/10/31 13:16:23 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_putstr(char *str)
{
	int	size;

	size = 0;
	if (str)
		size += write(1, str, ft_strlen(str));
	else
		size += write(1, "(null)", 6);
	return (size);
}
