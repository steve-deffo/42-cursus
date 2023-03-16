/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_value_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:46:59 by desteve           #+#    #+#             */
/*   Updated: 2023/02/06 19:34:13 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
ft_find_corret : ici me permet de trouver le meilleure index avec 
lequel commencer a ranger le tableaux


*/
#include "push_swap.h"

int	ft_find_correct_index_on_a(t_data *data, int index)
{
	int	i;

	i = data->topa;
	while (i > 0)
	{
		if (data->b[index] > data->a[i] && data->b[index] < data->a[i - 1])
			return (i - 1);
		i--;
	}
	return (data->topa);
}

int	ft_moves(t_data *data, int i)
{
	int	moves;
	int	sortedindex;

	moves = 0;
	if (i < data->topb / 2)
		moves += i;
	else
		moves += data->topb - i;
	sortedindex = ft_find_correct_index_on_a(data, i);
	if (sortedindex < data->topa / 2)
		moves += sortedindex;
	else
		moves += data->topa - sortedindex;
	return (moves);
}

int	ft_checkbestindex(t_data *data)
{
	int	moves;
	int	bestmoves;
	int	bestindex;
	int	i;

	i = data->topb;
	bestmoves = ft_moves(data, i);
	bestindex = data->topb;
	while (i >= 0)
	{
		moves = ft_moves(data, i);
		if (moves < bestmoves)
		{
			bestmoves = moves;
			bestindex = i;
		}
		i--;
	}
	return (bestindex);
}
