/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:24:27 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:44:15 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* recherche la présence du caractère ch dans la
 chaîne chaine . Si celui-ci est 
rencontré, la fonction retourne l'adresse de la 
première occurrence de celui-ci au 
sein de la chaîne. Dans le cas contraire, 
la fonction renvoie un pointeur nul.*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}
