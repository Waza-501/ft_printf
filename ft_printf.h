/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ohearn <ohearn@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 20:58:09 by ohearn        #+#    #+#                 */
/*   Updated: 2022/08/16 20:15:43 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stddef.h>

int			ft_printf(const char *string, ...);
int			print_p(unsigned long dec);

#endif