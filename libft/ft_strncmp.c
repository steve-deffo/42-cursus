/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:32:51 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:45:25 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de comparer deux chaînes
 de caractères et de savoir si la 
première est inférieure, égale ou supérieure à 
la seconde. Cette comparaison sera 
faite dans l'ordre lexicographique (et donc,
 en tenant compte des valeurs ASCII des 
différents caractères comparés). Néanmoins
 la comparaison se fera au maximum sur les 
length premiers caractères.*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}
