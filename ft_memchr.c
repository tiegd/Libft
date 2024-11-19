/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:44:19 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/19 14:44:20 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char) s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
/*
char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if ((char) c == '\0')
		return ((char *) &s[len]);
	while (s[i])
	{
		if ((char) s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}
*/