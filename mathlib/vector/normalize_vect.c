/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_vect.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 14:25:26 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 13:44:06 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mathlib.h"

t_vec3	normalize_vect(t_vec3 v)
{
	t_vec3	res;
	double	mag;

	init_tuple(&res);
	mag = vect_mag(v);
	res.x = v.x / mag;
	res.y = v.y / mag;
	res.z = v.z / mag;
	return (res);
}
