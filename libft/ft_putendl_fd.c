/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:02:39 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 18:27:50 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*permet d'ecrire un caractere mais avec un retour a la 
ligne difference entre putstr avec se retour a la ligne*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
	write(fd, "\n", 1);
}
