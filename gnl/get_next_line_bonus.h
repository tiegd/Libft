/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:04:15 by gaducurt          #+#    #+#             */
/*   Updated: 2025/05/07 14:06:58 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list_gnl
{
	char				*content;
	struct s_list_gnl	*next;
}						t_list_gnl;

char		*get_next_line(int fd);
int			ft_lst_size(t_list_gnl *lst);
void		ft_lstfree(t_list_gnl **lst);
int			ft_checklst(t_list_gnl *lst);
void		ft_lstnew_back(t_list_gnl **lst, char *str, int len);
t_list_gnl	*ft_lstlast_gnl(t_list_gnl *lst);

#endif
