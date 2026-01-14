/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_point_vect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:25:56 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 14:56:07 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libmath.h"

t_point3	sub_point_vect(t_point3 p, t_vec3 v)
{
	t_point3	res;

	init_tuple(&res);
	if (p.w != 1)
		return (res);
	if (v.w != 0)
		return (res);
	res.x = p.x - v.x;
	res.y = p.y - v.y;
	res.z = p.z - v.z;
	res.w = p.w - v.w;
	return (res);
}
