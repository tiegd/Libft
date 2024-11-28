/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tieg <tieg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:19:41 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/28 15:22:06 by tieg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Delete one elements of the linked list.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (lst)
		(*del)(lst->content);
	free(lst);
}
