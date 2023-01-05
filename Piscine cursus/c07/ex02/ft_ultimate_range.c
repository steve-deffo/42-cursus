/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:42:04 by desteve           #+#    #+#             */
/*   Updated: 2022/09/27 19:42:06 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;

	if (max > min)
	{
		p = malloc(sizeof(int) * (max - min));
		if (!p)
			return (-1);
		i = 0;
		while (i < max - min)
		{
			p[i] = min + i;
			i++;
		}
		*range = p;
		return (max - min);
	}
	*range = NULL;
	return (0);
}
/*
int main ()
{
	int max = 9;
	int min = 5;
	int i;
	int *p;
	i = ft_ultimate_range(&p,min, max);
	printf("%d\n", i);
	return (0);
}
*/
