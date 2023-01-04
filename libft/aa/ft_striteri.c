/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:58:03 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 12:57:19 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Description
Applique la fonction f à chaque caractère de la chaine de caractères
passée en paramètre en précisant son index en pre- mier argument.
Chaque caractère est passé par adresse à la fonction f afin de
pouvoir être modifié si nécéssaire.
Param. #1
La chaine de caractères sur laquelle itérer.
Param. #2
La fonction à appeler sur chaque caractère de s et son index.
Retour
Rien.*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
