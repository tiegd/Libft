/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 10:13:14 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/11 15:39:26 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <float.h>
#include <stdio.h>

// double	ft_atof(const char *nptr)
// {
// 	double	result;
// 	double	decimal;
// 	int	inv;

// 	result = 0.0;
// 	decimal = 0.1;
// 	inv = 1;
// 	while (*nptr == ' ' || ((*nptr >= 9 && *nptr <= 13) && *nptr != 0))
// 		nptr++;
// 	if (*nptr == '-' || *nptr == '+')
// 	{
// 		if (*nptr == '-')
// 			inv = -inv;
// 		nptr++;
// 	}
// 	while ((*nptr >= '0' && *nptr <= '9') && *nptr != '\0')
// 	{
// 		result = (result * 10) + (*nptr - '0');
// 		if (result > FLT_MAX + 1 && inv == -1)
// 			return (FLT_MIN);
// 		else if (result > FLT_MAX && inv == 1)
// 			return (FLT_MAX);
// 		nptr++;
// 	}
// 	if (*nptr == '.')
// 		nptr++;
// 	while ((*nptr >= '0' && *nptr <= '9') && *nptr != '\0')
// 	{
// 		result += (*nptr - '0') * decimal;
// 		decimal *= 0.1;
// 		nptr++;
// 	}
// 	return (result * inv);
// }
