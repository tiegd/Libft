/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 10:44:30 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/19 10:44:31 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_diff(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d < s || d >= s + n)
		return (0);
	return (1);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = dest;
	s = src;
	if (dest == 0 && src == 0)
		return (NULL);
	if (ft_diff(dest, src, n) == 0)
		dest = ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "ABCDEFGHIJ";
	char str2[] = "ABCDEFGHIJ";
    
    memmove(str1 + 1, str1 + 2, 3);
    ft_memmove(str2 + 1, str2 + 2, 3);

    printf("Résultat : %s\n", str1);
    printf("Résultat : %s\n", str2);
    return 0;
}*/
