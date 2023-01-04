/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:17:03 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:43:29 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction permet de copier un bloc de
 mémoire spécifié par le paramètre 
source dans un nouvel emplacement désigné par le paramètre destination .

la différence réside dans le fait que la fonction memmove 
accepte que les deux zones de mémoire puissent se chevaucher.

En cas de chevauchement, la copie se passe
 comme si les octets de la zone source 
étaient d'abord copiés dans une zone temporaire, 
qui ne chevauche aucune des deux zones 
pointées par source et destination, et les octets sont ensuite
 copiés de la zone temporaire vers la zone de destination.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (len > 0)
		{
			((char *)dest)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(dest, src, len);
	}
	return (dest);
}
