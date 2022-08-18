/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 17:09:05 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/18 12:53:29 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftlite.h"

int	fc_putstr(char *str)
{
	int	size;

	size = 0;
	if (str)
		size = write(1, str, fc_strlen(str));
	return (size);
}
