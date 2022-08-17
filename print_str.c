/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 14:08:04 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 17:47:16 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	print_str(char *string)
{
	int		size;

	size = 0;
	if (!string)
		return (0);
	size = fc_putstr(string);
	return (size);
}
