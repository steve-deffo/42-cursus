/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:45:14 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 18:12:50 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* permet de suprimer tout une liste*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head)
	{
		tmp = head -> next;
		ft_lstdelone(head, del);
		head = tmp;
	}
	*lst = NULL;
}
