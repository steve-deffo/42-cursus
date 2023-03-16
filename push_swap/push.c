/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:46:03 by desteve           #+#    #+#             */
/*   Updated: 2023/01/30 23:27:15 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_data *data)
{
	if (data->topa < 5)
		ft_sort_small(data);
	else if (data->topa <= 500)
	{
		ft_sort_large(data);
		while (ft_lowesta(data) != data->topa)
			rra(data);
	}
}

void	push(t_data *data, int min, int max)
{
	int	i;

	i = max - min;
	while (i != 0)
	{
		if (data->a[data->topa] < data->indexarray[max] \
		&& data->a[data->topa] >= data->indexarray[min])
		{
			pb(data);
			i--;
		}
		else
			ra(data);
	}
}

void	pusha(t_data *data)
{
	while (data->topb >= 0)
		pa(data);
}

void	pushback(t_data *data)
{
	int	x;

	x = 1;
	while (data->topb >= 0)
	{
		if (x == 1)
			x = get_values(data);
		if (data->bestvalue == data->b[data->topb])
			push_to_a(data, &x);
		else
		{
			if (data->bestindex > data->topb / 2 && \
			data->correctadd > data->topa / 2 && \
			data->correctvalue != data->a[data->topa])
				rr(data);
			else if (data->bestindex <= data->topb / 2 && \
			data->correctadd <= data->topa / 2 && \
			data->correctvalue != data->a[data->topa])
				rrr(data);
			else if (data->bestindex > data->topb / 2)
				rb(data);
			else
				rrb(data);
		}
	}
}

void	push_to_a(t_data *data, int *x)
{
	if (data->correctvalue == data->a[data->topa])
	{
		pa(data);
		*x = 1;
	}
	else
	{
		if (data->correctadd > data->topa / 2)
			ra(data);
		else
			rra(data);
	}
}
