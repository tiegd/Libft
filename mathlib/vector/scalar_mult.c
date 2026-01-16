/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar_mult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:43:56 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 13:44:14 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mathlib.h"

t_tuple	scalar_mult(t_tuple v, double factor)
{
	t_tuple	res;

	init_tuple(&res);
	res.x = v.x * factor;
	res.y = v.y * factor;
	res.z = v.z * factor;
	res.w = v.w * factor;
	return (res);
}
