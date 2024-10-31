/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 16:02:03 by owen          #+#    #+#                 */
/*   Updated: 2024/10/31 13:11:49 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_reset_data(t_data *data)
{
	data->idx = 0;
	data->count = 0;
}

void	ft_set_data(t_data *data)
{
	data->idx = 0;
	data->count = 0;
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
