/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:19:01 by desteve           #+#    #+#             */
/*   Updated: 2023/01/11 19:54:24 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read_str(int fd, char *l_str)
{
	char	*buff;
	int		i;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	i = 1;
	while (!ft_strchr(l_str, '\n') && i != 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[i] = '\0';
		l_str = ft_strjoin(l_str, buff);
	}
	free(buff);
	return (l_str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*l_str[1024];

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX)
		return (0);
	l_str[fd] = ft_read_str(fd, l_str[fd]);
	if (!l_str[fd])
		return (NULL);
	line = ft_get_line(l_str[fd]);
	l_str[fd] = ft_new_str(l_str[fd]);
	return (line);
}

// int main()
// {
// 	int fd1;
// 	int fd2;
// 	char *line;

// 	fd1 = open("test1",O_RDONLY);
// 	fd2 = open("test2",O_RDONLY);
// 	while (1)
// 	{
// 		line = get_next_line(fd1);
// 		if (line == NULL)
// 	 		break;
// 		printf("%s\n", line);
// 		free(line);

// 		line = get_next_line(fd2);
// 		if (line == NULL)
// 	 		break;
// 		printf("%s\n", line);
// 		free(line);
// 	 }
// 	return (0);
// }