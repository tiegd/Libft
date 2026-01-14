/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vect_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:56:28 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 14:55:47 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libmath.h"

t_point3	add_vect_point(t_vec3 v, t_point3 p)
{
	t_point3	res;

	init_tuple(&res);
	if (v.w != 0)
		return (res);
	if (p.w != 1)
		return (res);
	res.x = v.x + p.x;
	res.y = v.y + p.y;
	res.z = v.z + p.z;
	res.w = v.w + p.w;
	return (res);
}
