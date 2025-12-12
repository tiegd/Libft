/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:55:08 by gaducurt          #+#    #+#             */
/*   Updated: 2025/12/12 14:37:37 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYLIB_H
# define MYLIB_H

double	ft_atof(const char *nptr);
char	**db_free(char **db_tab);
int 	ft_strcmp(char *s1, char *s2);
char	**multi_split(char const *s, char c1, char c2);

#endif