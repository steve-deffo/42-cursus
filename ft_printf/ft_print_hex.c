/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:42:48 by desteve           #+#    #+#             */
/*   Updated: 2022/12/14 18:29:39 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_helper(unsigned int num, char c)
{
	int		length;
	int		reminder;
	char	symbol;

	reminder = 0;
	length = 0;
	reminder = num % 16;
	if (reminder < 10)
		symbol = reminder + '0';
	else
	{
		if (c == 'x')
			symbol = reminder - 10 + 'a';
		if (c == 'X')
			symbol = reminder - 10 + 'A';
	}
	if (num >= 16)
		length += ft_print_hex(num / 16, c);
	length += ft_print_char(symbol);
	return (length);
}

int	ft_print_hex(unsigned int num, char c)
{
	int	length;

	length = 0;
	if (num == 0)
		return (ft_print_char('0'));
	else
		length += ft_hex_helper(num, c);
	return (length);
}
