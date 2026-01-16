/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_two_points.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:22:32 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 13:44:19 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mathlib.h"

t_vec3	sub_two_points(t_point3 p1, t_point3 p2)
{
	t_vec3	res;

	init_tuple(&res);
	if (p1.w != 1 || p2.w != 1)
		return (res);
	res.x = p1.x - p2.x;
	res.y = p1.y - p2.y;
	res.z = p1.z - p2.z;
	res.w = p1.w - p2.w;
	return (res);
}
