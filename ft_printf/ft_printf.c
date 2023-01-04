/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:43:21 by desteve           #+#    #+#             */
/*   Updated: 2022/12/14 18:31:39 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list args, char c)
{
	int	length;

	length = 0;
	if (c == 'c')
		length = ft_print_char(va_arg(args, int));
	else if (c == 's')
		length = ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		length = ft_print_pointer(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		length = ft_print_number(va_arg(args, int));
	else if (c == 'u')
		length = ft_print_uint(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		length = ft_print_hex(va_arg(args, unsigned int), c);
	else
		length += ft_print_char(c);
	return (length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		lenght;
	va_list	args;

	i = 0;
	lenght = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			lenght += ft_type(args, str[i + 1]);
			i += 2;
		}
		else
		{
			lenght += ft_print_char(str[i]);
			i++;
		}
	}
	va_end(args);
	return (lenght);
}
