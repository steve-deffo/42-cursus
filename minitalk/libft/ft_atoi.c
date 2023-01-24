/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:02:50 by desteve           #+#    #+#             */
/*   Updated: 2022/11/30 23:13:32 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction permet de transformer une chaîne de caractères, 
représentant une valeur entière, en une valeur numérique de type int .*/
#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

int	ft_atoi(const char *nptr)
{
	size_t				i;
	int					sign;
	unsigned long long	res;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		++i;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		++i;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		++i;
		if (res > 9223372036854775808ULL && sign == 1)
			return (-1);
		if (res > 9223372036854775808ULL && sign == -1)
			return (0);
	}
	return (sign * res);
}
