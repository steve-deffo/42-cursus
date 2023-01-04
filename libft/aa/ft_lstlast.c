/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:42:25 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 18:24:21 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Le rôle de la fonction de dépilage est de supprimer l'élément 
tout en haut de la pile. Mais elle doit aussi
 retourner l'élément qu'elle dépile*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (lst == NULL)
		return (0);
	node = lst;
	while (node->next != NULL)
	{
		node = node->next;
	}
	return (node);
}
