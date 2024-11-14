/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 16:02:03 by owen          #+#    #+#                 */
/*   Updated: 2024/11/14 13:18:22 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_set_data(t_data *data)
{
	data->count = 0;
	data->invalid = 0;
}

size_t	ft_strsrc(const char *str)
{
	size_t	size;

	size = 0;
	while (str[size] != '%' && str[size] != '\0')
		size++;
	return (size);
}

size_t	ft_strlen(char *str)
{
	size_t	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
