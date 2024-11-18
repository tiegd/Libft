/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 08:22:45 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/18 08:32:02 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char) c == '\0')
		return ((char *) &s[i]);
	while (s[i])
	{
		if ((char) s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}
