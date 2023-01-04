/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:43:10 by desteve           #+#    #+#             */
/*   Updated: 2022/12/15 13:38:11 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	i;
	int	length;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		length += ft_print_char(str[i]);
		i++;
	}
	return (length);
}
