/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:46:41 by desteve           #+#    #+#             */
/*   Updated: 2022/09/27 21:56:05 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ligne(int len, char a, char b, char c)
{
	int	j;

	j = 0;
	while (j < len)
	{
		if (j == 0)
		{
			ft_putchar(a);
		}
		else if (j == len - 1)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(b);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y, char *choice)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (i < y)
	{
		if (i == 0)
		{
			ligne(x, choice[0], choice[1], choice[0]);
		}
		else if (i == y - 1)
		{
			ligne(x, choice[0], choice[1], choice[0]);
		}
		else
		{
			ligne(x, choice[2], ' ', choice[2]);
		}
		i++;
	}
}
