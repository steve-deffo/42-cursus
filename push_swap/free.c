/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:43:50 by desteve           #+#    #+#             */
/*   Updated: 2023/02/06 19:34:16 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ici  je libere la memoire au cas ou j'ai rencontre des erreur */
#include "push_swap.h"

void	error(t_data *data)
{
	free (data->indexarray);
	free (data->a);
	free (data->b);
	write(2, "Error\n", 6);
	exit (0);
}

void	free_args(t_data *data, char **args)
{
	int	i;

	i = 0;
	free (data->indexarray);
	free (data->a);
	free (data->b);
	while (args[i])
	{
		free (args[i]);
		i++;
	}
	free(args);
	write(2, "Error\n", 6);
	exit (0);
}

void	ft_free(t_data *data)
{
	free(data->a);
	data->a = NULL;
	free(data->b);
	data->b = NULL;
	free(data->indexarray);
	data->indexarray = NULL;
}
