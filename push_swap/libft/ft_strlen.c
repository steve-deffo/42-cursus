/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:46:05 by desteve           #+#    #+#             */
/*   Updated: 2022/11/30 20:17:17 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de calculer la longueur, 
exprimée en nombre de caractères, de la chaîne de caractères.*/
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}
