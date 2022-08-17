/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fc_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 16:39:01 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 21:32:18 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	calculator(int n)
{
	int		size;
	int		ret;

	size = 0;
	ret = (n % 10);
	if (n > 9)
		size += calculator(n / 10);
	size += fc_putchar((ret + '0'));
	return (size);
}

int	fc_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len = write(1, "-2147483648", 11);
		return (len);
	}
	if (n == 0)
	{
		len += fc_putchar('0');
		return (len);
	}
	if (n < 0)
	{
		len += fc_putchar('-');
		n *= -1;
	}
	len += calculator(n);
	return (len);
}
