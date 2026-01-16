/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:10:19 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 13:43:38 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mathlib.h"
#include <math.h>

/*
Rotation matrix along the x-axis = 	{{1, 0, 		0		  },
						 			 {0, cos(teta), -sin(teta)}
						 			 {0, sin(teta), cos(teta)}}
*/

t_tuple	rotate_x(t_tuple t, double alpha)
{
	t_tuple	res;
	double	rad_alpha;

	rad_alpha = (M_PI / 180) * alpha;
	init_tuple(&res);
	res.x = t.x;
	res.y = cosf(rad_alpha) * t.y - sinf(rad_alpha) * t.z;
	res.z = sinf(rad_alpha) * t.y + cosf(rad_alpha) * t.z;
	res.w = t.w;
	return (res);
}
