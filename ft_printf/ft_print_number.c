/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:42:53 by desteve           #+#    #+#             */
/*   Updated: 2022/12/15 13:38:27 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int nbr)
{
	char	c;
	int		length;

	length = 0;
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		length += ft_print_char('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		length += ft_print_number(nbr / 10);
	c = nbr % 10 + '0';
	length += ft_print_char(c);
	return (length);
}
