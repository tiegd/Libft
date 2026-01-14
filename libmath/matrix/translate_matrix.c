/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:49:42 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 14:55:44 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libmath.h"

/*
Translation matrix = 	{{1, 0, 0, trx},
						 {0, 1, 0, try},
						 {0, 0, 1, trz},
						 {0, 0, 0, 1}}
*/

t_tuple	translate_matrix(t_tuple t, double tr_x, double tr_y, double tr_z)
{
	t_tuple	res;

	init_tuple(&res);
	if (t.w != 0 && t.w != 1)
		return (res);
	res.x = t.x + tr_x;
	res.y = t.y + tr_y;
	res.z = t.z + tr_z;
	res.w = t.w;
	return (res);
}
