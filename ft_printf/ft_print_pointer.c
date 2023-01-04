/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:42:59 by desteve           #+#    #+#             */
/*   Updated: 2022/12/14 18:30:26 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_helper(uintptr_t num)
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
		symbol = reminder - 10 + 'a';
	if (num >= 16)
		length += ft_pointer_helper(num / 16);
	length += ft_print_char(symbol);
	return (length);
}

int	ft_print_pointer(unsigned long ptr)
{
	int	length;

	write(1, "0x", 2);
	length = 2;
	if (ptr == 0)
		length += ft_print_char('0');
	else
		length += ft_pointer_helper(ptr);
	return (length);
}
