/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tieg <tieg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:52:00 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/28 15:44:28 by tieg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Write a sting "s" followed by a new line, on fd display output.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
