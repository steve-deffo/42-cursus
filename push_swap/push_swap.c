/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 22:47:33 by desteve           #+#    #+#             */
/*   Updated: 2023/03/16 10:38:48 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* dans double ckeck : je vais gere le cas si on m'envoi des 
chaine de caractere

dans initialize: je vais charger mes pile en allouant 
de la place de maniere dynamique

flag: ici va m'aider a gere le cas ou se sont les chaine de caractere
 */
#include "push_swap.h"

void	double_check_arg(t_data *data, char *str)
{
	int		i;
	char	**args;

	args = ft_split(str, ' ');
	free (str);
	initialize(data, args);
	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	initialize(t_data *data, char **av)
{
	int		i;
	int		j;

	i = 0;
	while (av[i])
		i++;
	data->indexarray = (int *)malloc(sizeof(int) * i);
	data->a = (int *)malloc(sizeof(int) * i);
	data->b = (int *)malloc(sizeof(int) * i);
	if (!data->indexarray || !data->a
		|| !data->b)
		error(data);
	j = 0;
	i--;
	while (i >= 0)
	{
		data->indexarray[j] = ft_atoi(data, av[i], av);
		data->a[j++] = ft_atoi(data, av[i--], av);
	}
	data->topa = j - 1;
	data->topb = -1;
}

int	main(int argc, char **argv)
{
	t_data	data;
	int		i;
	char	*str;		
	int		flag;
	int		x;
	char	**res;

	x = 1;
	while (x < argc)
	{
		res = ft_split(argv[x], ' ');
		if(res[0] == NULL)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		x++;
	}
	str = "";
	if (argc == 1)
		exit(EXIT_SUCCESS);
	i = 1;
	flag = 0;
	while (argv[i])
	{
		str = ft_strjoin(str, argv[i], flag);
		flag = 1;
		i++;
	}
	double_check_arg(&data, str);
	ft_check(&data);
	return (0);
}
