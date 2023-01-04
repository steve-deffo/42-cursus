/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:36:01 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:44:21 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* alloue une nouvelle zone de mémoire via
 la fonction malloc afin d'y copier 
la chaîne de caractères initiale.*/
#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copy = (char *)malloc(sizeof(char) * i + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
