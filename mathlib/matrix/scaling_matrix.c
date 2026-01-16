/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scaling_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:32:34 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 13:43:48 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mathlib.h"

t_tuple	scaling_matrix(t_tuple t, double sx, double sy, double sz)
{
	t_tuple	res;

	init_tuple(&res);
	res.x = t.x * sx;
	res.y = t.y * sy;
	res.z = t.z * sz;
	res.w = t.w;
	return (res);
}
