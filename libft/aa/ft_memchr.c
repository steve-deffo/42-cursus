/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:36:34 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:42:41 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memchr() examine les n premiers 
octets de la zone mémoire pointée 
par s à la recherche du caractère c. Le premier octet correspondant à c 
(interprété comme un unsigned char) arrête l'opération.*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			*s1;

	s1 = (unsigned char *)s;
	while (n--)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		s1++;
	}
	return (NULL);
}
