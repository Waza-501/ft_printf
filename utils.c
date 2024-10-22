/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 16:02:03 by owen          #+#    #+#                 */
/*   Updated: 2024/10/22 13:07:21 by owhearn       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_specifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int	fc_putchar(char c)
{
	int	tally;

	tally = 0;
	tally += write (1, &c, 1);
	write(1, '\n', 1);
	return (tally);
}

int	fc_print_dec(unsigned int dec)
{
	int					size;
	unsigned int		ret;

	size = 0;
	ret = (dec % 10);
	if (dec > 9)
		size += fc_print_dec(dec / 10);
	size += fc_putchar((ret + '0'));
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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	char	*srccpy;
	size_t	new;

	destcpy = (unsigned char *)dest;
	srccpy = (unsigned char *)src;
	new = 0;
	while (new < n && (destcpy != NULL || srccpy != NULL))
	{
		destcpy[new] = srccpy[new];
		new++;
	}
	return (destcpy);
}

char	*ft_strdup(const char *s)
{
	char	*new;

	new = (char *)malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, s, ft_strlen(s) + 1);
	return (new);
}