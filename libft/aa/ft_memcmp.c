/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 02:02:57 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:42:54 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction permet de comparer le contenu 
de deux blocs de mémoire spécifiés 
par les deux premiers paramètres de la fonction. 
Le troisième paramètre, size , 
permet de spécifier le nombre d'octets 
sur lequel comparer les deux blocs. 
Les octets des deux blocs sont comparés deux à deux.*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*x1;
	unsigned char	*x2;

	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	i = -1;
	while (++i < n)
	{
		if (x1[i] != x2[i])
			return (x1[i] - x2[i]);
	}
	return (0);
}
