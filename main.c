/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/10 15:56:35 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/12 19:00:26 by ohearn        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <string.h>
#include <stdio.h>

int	main()
{
	char	*test;

	test = "Test, hello there";
	printf("Hello there, \n");
	ft_printf("this is a test.\n");
	printf("%s\n", test);
	ft_printf("%s\n", test);
}
