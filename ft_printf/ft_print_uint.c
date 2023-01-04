/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:43:16 by desteve           #+#    #+#             */
/*   Updated: 2022/12/15 13:38:03 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int nbr)
{
	char	c;
	int		length;

	length = 0;
	if (nbr == 4294967295)
	{
		write(1, "4294967295", 10);
		return (10);
	}
	if (nbr >= 10)
		length += ft_print_uint(nbr / 10);
	c = (nbr % 10) + '0';
	length += ft_print_char(c);
	return (length);
}
