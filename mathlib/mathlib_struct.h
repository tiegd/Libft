/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathlib_struct.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:20:38 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/16 15:01:13 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATHLIB_STRUCT_H
# define MATHLIB_STRUCT_H

typedef struct s_tuple
{
	double	x;
	double	y;
	double	z;
	double	w;
}	t_tuple;

typedef t_tuple	t_vec3;

typedef t_tuple	t_point3;

#endif
