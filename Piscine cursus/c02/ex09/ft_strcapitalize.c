/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:43:32 by desteve           #+#    #+#             */
/*   Updated: 2022/09/24 21:08:34 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (j == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (j == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((c < '0' || c > '9')
			&& (c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
			j = 1;
		else
		j = 0;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}
*/
