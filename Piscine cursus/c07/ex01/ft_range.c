/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:40:40 by desteve           #+#    #+#             */
/*   Updated: 2022/09/27 19:40:44 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	if (min >= max)
		return (0);
		p = (int *) malloc (sizeof(int) * (max - min));
	if (!p)
		return (0);
	while (i < max - min)
	{
			p[i] = min + i;
			i++;
	}
	return (p);
}
/*
int main()
{
	int max = 9;
	int min = 5;
	int *tab = ft_range(min, max);
	for (int x = 0; x < max - min; x++)
		printf("%d\n", tab[x]); 
	return (0);
}
*/
