/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tieg <tieg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:15:50 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/28 15:24:11 by tieg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Apply a function on each element of a linked list an stock the result in a new linked list.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*stock;
	t_list	*result;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	stock = NULL;
	while (lst)
	{
		result = f(lst->content);
		new = ft_lstnew(result);
		if (!new)
		{
			free(result);
			ft_lstclear(&stock, del);
			return (NULL);
		}
		ft_lstadd_back(&stock, new);
		lst = lst->next;
	}
	return (stock);
}
