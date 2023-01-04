/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:47:27 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 18:26:08 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itère la liste 'lst' et applique la fonction 'f'
au contenu de chaque élément.
Crée une nouvelle liste résultant de
 les applications successives de la fonction 'f'.
La fonction 'del' permet de supprimer le contenu d'un élément si nécessaire.*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_node = ft_lstnew(f(lst->content));
	if (!new_node)
	{
		ft_lstclear(&new_node, del);
		return (NULL);
	}
	new_node->next = ft_lstmap(lst->next, f, del);
	return (new_node);
}
