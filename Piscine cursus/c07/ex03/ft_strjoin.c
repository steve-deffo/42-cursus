/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:43:14 by desteve           #+#    #+#             */
/*   Updated: 2022/09/27 19:43:17 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;
	int		x;

	dest = malloc(sizeof(strs));
	i = 0;
	j = 0;
	while (i < size)
	{
		x = 0;
		while (strs[i][x])
		{
			dest[j++] = strs[i][x++];
		}
		x = 0;
		while (sep[x] && i < size -1)
		{
			dest[j++] = sep[x++];
		}
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
