/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 12:16:54 by owen          #+#    #+#                 */
/*   Updated: 2024/10/24 12:21:13 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_putstr(char *str)
{
	int	size;

	size = write(1, str, ft_strlen(str));
	return (size);
}