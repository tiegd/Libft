/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_two_vect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 17:38:03 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 14:56:11 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libmath.h"

t_vec3	sub_two_vect(t_vec3 v1, t_vec3 v2)
{
	t_vec3	res;

	init_tuple(&res);
	if (v1.w != 0 || v2.w != 0)
		return (res);
	res.x = v1.x - v2.x;
	res.y = v1.y - v2.y;
	res.z = v1.z - v2.z;
	res.w = v1.w - v2.w;
	return (res);
}
