/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tieg <tieg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:17:02 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/28 16:24:41 by tieg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Copy a string "s" in a new string with malloc, since the index "start" to
**	the index "start + len".
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	s_len;

	if (!(s))
		return (NULL);
	s_len = ft_strlen(s);
	if (start + len > s_len)
		len = s_len - start;
	if (start >= s_len)
		len = 0;
	dest = malloc((len + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	i = 0;
	while (i < len && *s)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char const	*s = "hola";
	unsigned int	start = 0;
	size_t	len = 18446744073709551615;

	printf("%s\n", ft_substr(s, start, len));
}
*/