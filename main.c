/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/17 16:49:19 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/17 19:04:01 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		idx;
	char	*str;

	idx = 0;
	str = "testing 123";
	ft_printf("Testing: %c\n", 48);
	return (0);
}
