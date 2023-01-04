/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:19:03 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:46:06 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de convertir une 
lettre majuscule à une lettre minuscule*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
