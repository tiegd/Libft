/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_y.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 14:09:05 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 13:43:41 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mathlib.h"
#include <math.h>

/*
Rotation matrix along the y-axis = 	{{cos(teta),  0, sin(teta)},
						 			 {0, 		  1, 0		  }
						 			 {-sin(teta), 0, cos(teta)}}
*/

t_tuple	rotate_y(t_tuple t, double alpha)
{
	t_tuple	res;
	double	rad_alpha;

	rad_alpha = (M_PI / 180) * alpha;
	init_tuple(&res);
	res.x = cosf(rad_alpha) * t.x + sinf(rad_alpha) * t.z;
	res.y = t.y;
	res.z = -sinf(rad_alpha) * t.x + cosf(rad_alpha) * t.z;
	res.w = t.w;
	return (res);
}
