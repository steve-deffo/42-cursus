/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:49:19 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:43:02 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction permet de copier un bloc de 
mémoire spécifié par le paramètre source , 
et dont la taille est spécifiée via le paramètre size , 
dans un nouvel emplacement désigné par le paramètre destination .
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
