/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tieg <tieg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:51:11 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/28 16:15:23 by tieg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Return the last ocurence of "c" in the string "s".
*/

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
/*
#include <stdio.h>

int main()
{
    const char    s[] = "Bonjour tout le /monde !";
    char    c = '/';
    printf("%s", (ft_strrchr(s, c)));
}*/