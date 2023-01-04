/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:24:28 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:44:44 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de rajouter à une chaîne 
de caractères déjà existante le 
contenu d'une seconde. Autrement dit de concaténer 
les contenu de deux chaînes de 
caractères, mais le résultat sera stocké dans 
la première chaîne passé en paramètre 
(aucune nouvelle chaîne ne sera produite).*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (i + ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
