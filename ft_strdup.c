/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tieg <tieg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:45:34 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/28 15:52:22 by tieg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Copy the string "s" in a new string with malloc.
*/

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
/*
int	main()
{
	int	i = 0;
	char	s[] = "Bonjour !";

	ft_strdup(s);
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}*/