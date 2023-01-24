/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 21:28:18 by desteve           #+#    #+#             */
/*   Updated: 2023/01/11 19:54:55 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*READ_L_STR
-----------------
DESCRIPTION
Prend le descripteur de fichier ouvert et sauvegarde dans une variable 
"buff" ce qui a été lu.
à partir de celui-ci. Ensuite, il le joint à la variable statique
 cumulative pour la persistance
de l'information.
PARAMÈTRES
1. Un descripteur de fichier.
2. Le pointeur vers la variable statique cumulative des
 exécutions précédentes de
get_next_line.
VALEURS DE RETOUR
La nouvelle valeur de la variable statique avec le tampon 
joint pour la persistance de l'info,
ou NULL en cas d'erreur.

*/

#include "get_next_line.h"

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
	static char	*l_str;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX)
		return (0);
	l_str = ft_read_str(fd, l_str);
	if (!l_str)
		return (NULL);
	line = ft_get_line(l_str);
	l_str = ft_new_str(l_str);
	return (line);
}

// int main()
// {
// 	int fd;
// 	char *line;

// 	fd = open("test1",O_RDONLY);
// 	while (1)
// 	{
// 		line = get_next_line(fd);
// 		if (line == NULL)
// 	 		break;
// 		printf("%s\n", line);
// 		free(line);
// 	 }
// 	return (0);
// }
