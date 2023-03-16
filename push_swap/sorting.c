/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:50:26 by desteve           #+#    #+#             */
/*   Updated: 2023/01/30 23:27:20 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//bubble sorting in decsending order
//(bcz end of the array is treated as the top of the stack)

void	sortarry(t_data *data)
{
	int	n;
	int	i;
	int	j;
	int	tmp;

	n = data->topa + 1;
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (data->indexarray[j] > data->indexarray[i])
			{
				tmp = data->indexarray[i];
				data->indexarray[i] = data->indexarray[j];
				data->indexarray[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_small(t_data *data)
{
	if (data->topa == 0)
		return ;
	else if (data->topa == 1)
		sa(data);
	else if (data->topa == 2)
		ft_sort_three(data);
	else
	{
		while (data->topa > 2 && !ft_is_sorted(data))
		{
			if (ft_lowesta(data) == data->topa)
				pb(data);
			else
			{
				if (ft_lowesta(data) <= 1)
					rra(data);
				else
					ra(data);
			}
		}
		if (!ft_is_sorted(data))
			ft_sort_small(data);
		pusha(data);
	}
}

void	ft_sort_large(t_data *data)
{
	int	low;
	int	top;
	int	high;

	low = 1;
	top = data->topa;
	high = top / 2;
	while (low < top)
	{
		push(data, low, high);
		low = high;
		high = (high + (top - high) / 2) + 1;
	}
	pushback(data);
}

void	ft_sort_three(t_data *data)
{
	if (data->a[2] > data->a[1] && data->a[2] < data->a[0])
		sa(data);
	else if (data->a[2] > data->a[1]
		&& data->a[2] > data->a[0] && data->a[1] < data->a[0])
		ra(data);
	else if (data->a[2] < data->a[1] && data->a[2] > data->a[0])
		rra(data);
	else if (data->a[2] < data->a[1] && data->a[2] < data->a[0])
	{
		sa(data);
		ra(data);
	}
	else if (data->a[2] > data->a[1] && data->a[2] > data->a[0])
	{
		sa(data);
		rra(data);
	}
}
