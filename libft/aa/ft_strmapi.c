/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:43:41 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:45:05 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applique la fonction f à chaque caractère de la chaîne passée
comme argument en donnant son index comme premier argument pour créer un
 nouvelle chaîne "fraîche" (avec malloc(3)) résultant de la succession
 demandes de F.
 Param. #1 La chaîne à mapper.
Param. #2 La fonction à appliquer à chaque caractère de s et son index.
 Valeur de retour La chaîne "fraîche" créée à
  partir des applications successives de
 F.
Fonctions libc malloc(3)*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
