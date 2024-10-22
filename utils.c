/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 16:02:03 by owen          #+#    #+#                 */
/*   Updated: 2024/10/22 11:15:42 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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