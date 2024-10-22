/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convertor.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/22 11:22:17 by owhearn       #+#    #+#                 */
/*   Updated: 2024/10/22 11:22:36 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	add_hex(t_list *print, va_list args, int id)
{
	
}

int	add_dec(t_list *print, va_list args, int id)
{
	
}

int	add_char(t_list *print, va_list args, int id)
{
	if (id == 'c')
		ft_lstadd_back(&print, new_node(ft_strdup(va_arg(args, int))));
	else if (id == 's')
		ft_lstadd_back(&print, new_node(ft_strdup(va_arg(args, char *))));
	return (0);
}
