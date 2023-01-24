/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:52:22 by desteve           #+#    #+#             */
/*   Updated: 2023/01/23 16:26:48 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	convert_char(char c, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (c >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
		usleep(200);
		i--;
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	if (ac != 3)
	{
		ft_putstr_fd("\033[31mInvalid arguments!\033[0m\n", 1);
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (av[1][i])
	{
		if (!(av[1][i] >= '0' && av[1][i] <= '9'))
		{
			ft_putstr_fd("\033[31mInvalid pid\033[0m\n", 1);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	i = 0;
	pid = ft_atoi(av[1]);
	if (pid <= 0)
		exit(EXIT_FAILURE);
	while (av[2][i])
		convert_char(av[2][i++], pid);
	exit(EXIT_SUCCESS);
}
