/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:39:15 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 13:20:59 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction permet de fixer la valeur à chaque octet 
d'un bloc de données d'octets à la valeur 0.*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
