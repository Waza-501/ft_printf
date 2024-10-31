/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/17 16:49:19 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/31 12:13:36 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		idx;
	int		return_val;
	int		return_val2;
	char	*str;

	idx = 0;
	str = "Funny haha temp text";
	return_val = ft_printf("Testing:\n%s\n%i\n", str, idx);
	return_val2 = printf("Testing:\n%s\n%i\n", str, idx);
	printf("Return value: %d\n", return_val);
	printf("Return value2: %d\n", return_val2);
	return (0);
}
