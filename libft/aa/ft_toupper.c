/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:27:49 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 17:46:10 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction permet de convertir une
 lettre minuscule à une lettre majuscule.*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
