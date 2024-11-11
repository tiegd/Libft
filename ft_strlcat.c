/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:51:10 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/11 16:32:42 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char dest, char *src, size_t size)
{
    size_t   lensource;
    size_t    lendest;
    size_t    i;

    lensource = ft_strlen(src);
    lendest = ft_strlen(dest);
    i = 0;
    if (size > lendest)
    {
        while ((i < size - 1 - lendest) && src[i])
        {
            dest[lendest + i] = src[i];
            i++;
        }
        dest[lendest + i] = '\0';
        return (lensource + lendest);
    }
    return (lensource + size);
}
