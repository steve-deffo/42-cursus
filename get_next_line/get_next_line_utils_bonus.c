/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:20:14 by desteve           #+#    #+#             */
/*   Updated: 2023/01/11 18:34:12 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	x;
	size_t	y;
	char	*ret;

	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	ret = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!ret)
		return (NULL);
	x = 0;
	y = -1;
	if (s1)
		while (s1[++y] != '\0')
			ret[y] = s1[y];
	while (s2[x] != '\0')
		ret[y++] = s2[x++];
	ret[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (ret);
}

char	*ft_get_line(char *l_str)
{
	int		i;
	char	*str;

	i = 0;
	if (!l_str[i])
		return (NULL);
	while (l_str[i] && l_str[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (l_str[i] && l_str[i] != '\n')
	{
		str[i] = l_str[i];
		i++;
	}
	if (l_str[i] == '\n')
	{
		str[i] = l_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_str(char *l_str)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (l_str[i] && l_str[i] != '\n')
		i++;
	if (!l_str[i])
	{
		free(l_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(l_str) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (l_str[i])
		str[j++] = l_str[i++];
	str[j] = '\0';
	free(l_str);
	return (str);
}
