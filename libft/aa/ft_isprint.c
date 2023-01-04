/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:08:06 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:42:15 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction permet de tester si un caractère s'affiche 
(is printable) ou non. Parmis ces caractères on retrouve l'ensemble 
des caractères ayant une représentation graphique (ceux pour qui la 
fonction isgraph retourne vrai) ainsi que le caractère 
d'espacement (de code 0x20 ). */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
