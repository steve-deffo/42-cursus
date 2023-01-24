/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:00:08 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:43:45 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ces fonctions permettent d'écrire un caractère 
sur le flux de caractères passé en paramètre*/
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
