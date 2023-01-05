/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:35:27 by desteve           #+#    #+#             */
/*   Updated: 2022/09/27 21:58:02 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	rush(int x, int y, char *choice);
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 0)
			;
	
	//for (int i = 1; i < 20 ; i++)
	//{
	//	printf("testing the dimensions %d, %d\n", i, i);
		rush ( atoi(argv[1]) , atoi(argv[2]), argv[3]);
	//}
	return (0);
}
