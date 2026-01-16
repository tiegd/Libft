/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_rotate_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:32:41 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 13:43:19 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mathlib.h"
#include <math.h>

t_tuple	all_rotate_matrix(t_tuple t, double alpha_x, double alpha_y,
	double alpha_z)
{
	t_tuple	res;

	res = t;
	res = rotate_x(res, alpha_x);
	res = rotate_y(res, alpha_y);
	res = rotate_z(res, alpha_z);
	return (res);
}
