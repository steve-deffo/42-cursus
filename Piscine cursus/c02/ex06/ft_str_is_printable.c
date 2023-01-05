/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:39:52 by desteve           #+#    #+#             */
/*   Updated: 2022/09/18 18:03:04 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char str[] = "fdgdhhhdyeFRT";
	printf("%d\n", ft_str_is_printable(str));
}
*/
