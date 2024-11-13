/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: owhearn <owhearn@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/15 14:36:01 by owhearn       #+#    #+#                 */
/*   Updated: 2024/11/07 13:16:21 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_data
{
	int		count;
}	t_data;

void	ft_set_data(t_data *data);
size_t	ft_strsrc(const char *str);
size_t	ft_strlen(char *str);
int		fc_putchar(char c);
int		fc_putstr(char *str);
int		fc_print_hex(unsigned long hex, int id);
int		fc_print_int(long nbr);
int		fc_putpnt(uintptr_t *ptr);
int		fc_print_uns(unsigned long dec);
int		ft_printf(const char *str, ...);

#endif