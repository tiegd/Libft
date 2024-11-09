/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:51:10 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/09 15:52:18 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *s);

unsigned int    ft_strlcat(chardest, char *src, unsigned int size)
{
    unsigned int    lensource;
    unsigned int    lendest;
    unsigned int    i;

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
