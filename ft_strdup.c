/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:45:34 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 16:19:20 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = malloc(i + 1 * sizeof(char));
	if (!(dest))
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = (char) s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
