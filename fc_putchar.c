/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 17:00:26 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 18:43:46 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_putchar(char c)
{
	int	tally;

	tally = 0;
	write (1, &c, 1);
	tally++;
	return (tally);
}
