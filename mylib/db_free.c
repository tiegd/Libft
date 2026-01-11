/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:41:16 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/11 15:41:59 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*Free a char**.*/

char	**db_free(char **db_tab)
{
	int	i;

	i = 0;
	while (db_tab[i])
	{
		free(db_tab[i]);
		i++;
	}
	free(db_tab);
	return (NULL);
}
