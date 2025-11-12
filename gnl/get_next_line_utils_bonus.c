/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:04:41 by gaducurt          #+#    #+#             */
/*   Updated: 2025/05/07 15:19:35 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*
**	Return the total number of char in a list.
*/

int	ft_lst_size(t_list_gnl *lst)
{
	int	size;

	size = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*
**	Free a linked list.
*/

void	ft_lstfree(t_list_gnl **lst)
{
	t_list_gnl	*buffer;

	if (lst)
	{
		while (*lst)
		{
			buffer = (*lst)->next;
			free((*lst)->content);
			free(*lst);
			*lst = buffer;
		}
	}
}

int	ft_checklst(t_list_gnl *lst)
{
	int			i;
	t_list_gnl	*element;

	i = 0;
	if (!lst)
		return (0);
	element = ft_lstlast_gnl(lst);
	while (element->content[i])
	{
		if (element->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

/*
**	Creat a new element of list with a content in parameter.
*/

void	ft_lstnew_back(t_list_gnl **lst, char *str, int len)
{
	t_list_gnl	*new;
	t_list_gnl	*last;
	int			i;

	new = malloc(sizeof(t_list_gnl));
	if (!new)
		return (ft_lstfree(lst));
	new->content = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!new->content)
	{
		free(new);
		return (ft_lstfree(lst));
	}
	i = -1;
	while (++i < len)
		new->content[i] = str[i];
	new->content[i] = '\0';
	new->next = NULL;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast_gnl(*lst);
	last->next = new;
}

/*
**	Add an element at the end of list.
*/

t_list_gnl	*ft_lstlast_gnl(t_list_gnl *lst)
{
	if (!lst || !lst->next)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
