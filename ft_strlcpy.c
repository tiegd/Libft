/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:47:07 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/11 16:17:39 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char dest, char *src, unsigned int size)
{
    int    srclen;
    int    i;

    i = 0;
    srclen = ft_strlen(src);
    if (size == 0)
        return (srclen);
    while (src[i] && i < size -1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (srclen);
}