/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:32:57 by desteve           #+#    #+#             */
/*   Updated: 2023/03/11 17:10:54 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include "fractol.h"
/*
	check for 2 conditions (if julia greater than 2 and less than -2)
	check for alphabet like 2.Abc or a.2bc or 2.4a and give error
*/
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

static double	ft_pow(int base, unsigned int pow)
{
	double	res;

	res = 1;
	while (pow != 0)
	{
		res = res * base;
		pow--;
	}
	return (res);
}

double	ft_atof(const char *str)
{
	double			res;
	double			sign;
	unsigned int	i;
	unsigned int	j;

	res = 0;
	i = 0;
	sign = 1.0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1.0;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	if (str[i] == '.' && str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	j = 1;
	while (str[i] >= '0' && str[i] <= '9')
		res = res + (str[i++] - '0') / ft_pow (10.0, j++);
	return (res * sign);
}

int	error_check(const char *str)
{
	int	flag;
	int	i;

	i = 0;
	flag = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '.')
			i++;
		if ((str[i] < '0' || str[i] > '9'))
			flag = 0;
		i++;
	}
	return (flag);
}
