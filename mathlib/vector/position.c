/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 10:04:44 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 13:44:09 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mathlib.h"

/*
This function ise used for ifnd the piont at a distance t on a ray.
*/

t_point3	position(t_point3 ray_origin, t_vec3 ray_dir, double t)
{
	t_point3	pos;

	pos = scalar_mult(ray_dir, t);
	pos = add_vect_point(pos, ray_origin);
	return (pos);
}
