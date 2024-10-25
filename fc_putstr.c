/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 12:16:54 by owen          #+#    #+#                 */
/*   Updated: 2024/10/25 12:57:20 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_putstr(char *str)
{
	int	size;

	size = write(1, str, ft_strlen(str));
	return (size);
}
