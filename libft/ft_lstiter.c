/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:46:31 by desteve           #+#    #+#             */
/*   Updated: 2022/11/28 18:22:21 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itère la liste 'lst' et applique la fonction 'f' au contenu de
chaque élément.*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
