/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   putcharmain.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 20:22:18 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 20:53:57 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

int	main(void)
{
	int	test;
	int	ret;

	test = 4242;
	ft_putnbr_fd(test, 1);
	printf("\n");
}
