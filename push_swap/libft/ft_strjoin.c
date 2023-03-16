/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:46:23 by desteve           #+#    #+#             */
/*   Updated: 2023/02/02 13:47:00 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Les éléments de dyn_string sont combinés en une 
chaîne séparée par le délimiteur défini.*/
#include "libft.h"

char	*ft_strjoin(char *s1, char *s2, int flag)
{
	char	*str12;
	int		i;
	int		j;
	int		len;

	i = -1;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str12 = (char *)malloc(sizeof(char) * (len + 2));
	if (!str12)
		return (NULL);
	while (s1[++i] != '\0')
		str12[i] = s1[i];
	str12[i++] = ' ';
	while (s2[j])
	{
		str12[i] = s2[j];
		j++;
		i++;
	}
	str12[i] = '\0';
	if (flag)
		free (s1);
	return (str12);
}
