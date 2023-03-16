/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:41:35 by desteve           #+#    #+#             */
/*   Updated: 2023/02/06 19:34:19 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  ftcheck : me permet de faire des verification avant de faire le traitement 
des donne 
*/
#include "push_swap.h"

void	ft_check(t_data *data)
{
	if (ft_is_duplicate(data->a, data->topa))
		error(data);
	sortarry(data);
	if (!ft_is_sorted(data))
		ft_push(data);
	ft_free(data);
}

int	ft_is_duplicate(int *array, int maxindex)
{
	int	i;
	int	j;

	i = 0;
	while (i <= maxindex)
	{
		j = i + 1;
		while (j <= maxindex)
		{
			if (array[j] == array[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_sorted(t_data *data)
{
	int	i;

	i = data->topa;
	while (i != 0)
	{
		if (data->a[i] < data->a[i - 1])
			i--;
		else
			return (0);
	}
	return (1);
}
