/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   putcharmain.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/17 20:22:18 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/17 21:38:29 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

int	main(void)
{
	int	test;
	int	ret;
	int	rett;

	test = -2147483648;
	ret = ft_printf("%i\n", test);
	rett = printf("%i\n", test);
	printf("%i\n", ret);
	printf("%i\n", rett);
}
