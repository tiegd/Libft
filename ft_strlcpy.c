/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:47:07 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/09 15:48:24 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *s);

unsigned int    ft_strlcpy(chardest, char *src, unsigned int size)
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