/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:18:57 by gaducurt          #+#    #+#             */
/*   Updated: 2026/01/14 15:07:56 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMATH_H
# define LIBMATH_H

# include "libmath_struct.h"

/*----------VECTOR----------*/

t_point3	add_vect_point(t_vec3 v, t_point3 p);
void		init_tuple(t_tuple *t);
t_vec3		sub_two_vect(t_vec3 v1, t_vec3 v2);
t_point3	sub_point_vect(t_point3 p, t_vec3 v);
t_vec3		sub_two_points(t_point3 p1, t_point3 p2);
t_tuple		inv_tup(t_tuple v);
t_tuple		scalar_mult(t_tuple v, double factor);
t_tuple		scalar_div(t_tuple v, double factor);
double		vect_mag(t_vec3 v);
t_vec3		normalize_vect(t_vec3 v);
double		dot_product(t_vec3 v1, t_vec3 v2);
t_vec3		cross_product(t_vec3 v1, t_vec3 v2);
t_point3	position(t_point3 ray_origin, t_vec3 ray_dir, double t);

/*----------MATRIX----------*/

t_tuple		translate_matrix(t_tuple t, double tr_x, double tr_y, double tr_z);
t_tuple		all_rotate_matrix(t_tuple t, double angle_x, double angle_y,
				double angle_z);
t_tuple		rotate_x(t_tuple t, double alpha);
t_tuple		rotate_y(t_tuple t, double alpha);
t_tuple		rotate_z(t_tuple t, double alpha);

#endif
