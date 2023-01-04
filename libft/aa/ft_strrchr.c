/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:22:39 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:45:47 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction strchr() recherche la présence du
 caractère ch dans la chaîne chaine . 
Si celui-ci est rencontré, la fonction retourne 
l'adresse de la première occurrence de 
celui-ci au sein de la chaîne. Dans le cas contraire, 
la fonction renvoie un pointeur nul.*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
