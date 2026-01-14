/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:32:48 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 16:20:05 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*dest;
	size_t			end;
	size_t			start;
	size_t			i;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (ft_check(s1[start], set) == 1)
		start++;
	while (end > start && ft_check(s1[end - 1], set) == 1)
		end--;
	dest = malloc(end - start + 1 * sizeof(char));
	if (!(dest))
		return (NULL);
	while (start < end)
	{
		dest[i] = s1[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return ((char *) dest);
}
