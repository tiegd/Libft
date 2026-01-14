/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:51:11 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 16:20:02 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *) &s[len]);
	while (len >= 0)
	{
		if ((char) s[len] == (char) c)
			return ((char *) &s[len]);
		len--;
	}
	return (0);
}
