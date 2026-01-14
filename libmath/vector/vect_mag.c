/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vect_mag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:02:34 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 14:56:53 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../libmath.h"

double	vect_mag(t_vec3 v)
{
	double	res;

	res = sqrtf(powf(v.x, 2) + powf(v.y, 2) + powf(v.z, 2));
	return (res);
}
