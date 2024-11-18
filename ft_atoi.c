/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:37:28 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/18 14:42:26 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	count;
	int	inv;

	count = 0;
	inv = 1;
	while ((*nptr == '\f' || *nptr == '\n' || *nptr == '\r' || *nptr == '\t'
			|| *nptr == '\v' || *nptr == ' ') && *nptr != 0)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			inv = -inv;
		nptr++;
	}
	if (!(*nptr >= '0' && *nptr <= '9'))
		return (0);
	while ((*nptr >= '0' && *nptr <= '9') && *nptr != '\0')
	{
		count = (count * 10) + (*nptr - '0');
		nptr++;
	}
	return (count * inv);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, const char **argv)
{
	if (argc == 2)
	{
		printf("my atoi = %d\n", (ft_atoi(argv[1])));
		printf("vrai atoi = %d\n", (atoi(argv[1])));
	}
	
}
*/