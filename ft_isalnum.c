/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tieg <tieg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:16:22 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/28 15:15:09 by tieg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Check if a char is an alphanumerical character.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
