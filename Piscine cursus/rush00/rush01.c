/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:52:33 by desteve           #+#    #+#             */
/*   Updated: 2022/09/17 15:57:11 by desteve          ###   ########.fr       */
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

void	rush(int x, int y)
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
			ligne(x, '/', '*', '\\');
		}
		else if (i == y - 1)
		{
			ligne(x, '\\', '*', '/');
		}
		else
		{
			ligne(x, '*', ' ', '*');
		}
		i++;
	}
}
