/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:12:36 by desteve           #+#    #+#             */
/*   Updated: 2022/09/14 12:55:23 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '0' - 1;
	while (++nb1 <= '9')
	{
		nb2 = nb1;
		while (++nb2 <= '9')
		{
				nb3 = nb2;
			while (++nb3 <= '9')
			{
				if (nb1 != '0' || nb2 != '1' || nb3 != '2')
					ft_putchar(',');
				if (nb1 != '0' || nb2 != '1' || nb3 != '2')
					ft_putchar(' ');
				ft_putchar(nb1);
				ft_putchar(nb2);
				ft_putchar(nb3);
			}
		}
	}
}
/*
int main()
{
	ft_print_comb();
}
*/
