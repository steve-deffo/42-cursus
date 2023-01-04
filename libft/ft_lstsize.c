/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:41:24 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 18:20:15 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*permet d'avoire la taile d'une liste*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		size;

	size = 0;
	node = lst;
	while (node)
	{
		node = node->next;
		size++;
	}
	return (size);
}
