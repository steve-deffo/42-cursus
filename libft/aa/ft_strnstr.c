/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:27:27 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:45:36 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction strstr recherche la première
 occurrence d'une sous-chaîne (paramètre substring )
 dans la chaîne de caractères principale (paramètre 
 la taille specifier dans len).*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i_big;
	unsigned int	i_lit;

	i_big = 0;
	i_lit = 0;
	if (little[i_lit] == '\0')
		return ((char *)big);
	if (big && len > ft_strlen(big))
		len = ft_strlen(big);
	while (i_big < len)
	{
		i_lit = 0;
		while (little[i_lit] != '\0' && big[i_big + i_lit] == little[i_lit]
			&& (i_lit < (len - i_big)))
		{
			i_lit++;
		}
		if (i_lit == ft_strlen(little))
			return ((char *)(big + i_big));
		i_big++;
	}
	return (NULL);
}
