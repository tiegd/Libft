/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar_div.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:50:21 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 14:56:02 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libmath.h"

t_tuple	scalar_div(t_tuple v, double factor)
{
	t_tuple	res;

	init_tuple(&res);
	res.x = v.x / factor;
	res.y = v.y / factor;
	res.z = v.z / factor;
	res.w = v.w / factor;
	return (res);
}
