/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:18:38 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:47:32 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction alloue un bloc de mémoire en initialisant tous ces 
octets à la valeur 0. Bien que relativement proche de la fonction malloc, 
deux aspects les différencient : L'initialisation : calloc met tous les 
octets du bloc à la valeur 0 alors que malloc 
ne modifie pas la zone de mémoire.*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size >= SIZE_MAX)
		return (NULL);
	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
