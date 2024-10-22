/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: owen <owen@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 16:27:30 by owen          #+#    #+#                 */
/*   Updated: 2024/10/21 16:28:57 by owen          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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