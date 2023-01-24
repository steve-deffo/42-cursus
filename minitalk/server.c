/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:32:06 by desteve           #+#    #+#             */
/*   Updated: 2023/01/22 19:26:09 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	convert_msg(int signum)
{
	static int	power;
	static int	byte;

	if (signum == SIGUSR1)
			byte += 1 << (7 - power);
	power++;
	if (power == 8)
	{
		ft_putchar_fd(byte, 1);
		if (byte == '\0')
			exit (EXIT_SUCCESS);
		power = 0;
		byte = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putstr_fd("server PID [", 1);
	ft_putnbr_fd(pid, 1);
	ft_putstr_fd("]\n", 1);
	signal(SIGUSR1, convert_msg);
	signal(SIGUSR2, convert_msg);
	while (1)
		pause();
}
