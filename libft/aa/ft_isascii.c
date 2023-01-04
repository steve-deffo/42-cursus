/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 20:02:18 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 12:25:19 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction isascii() teste si un caractère donné, dans la locale actuelle, 
peut être représenté comme un caractère US-ASCII 7 bits valide.*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
