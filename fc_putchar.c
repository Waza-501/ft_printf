/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/24 12:08:39 by owen          #+#    #+#                 */
/*   Updated: 2024/10/24 12:21:56 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fc_putchar(char c)
{
	int	tally;

	tally = write (1, &c, 1);
	return (tally);
}
