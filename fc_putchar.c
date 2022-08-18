/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 17:00:26 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/18 09:04:07 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_putchar(char c)
{
	int	tally;

	tally = 0;
	tally += write (1, &c, 1);
	return (tally);
}
