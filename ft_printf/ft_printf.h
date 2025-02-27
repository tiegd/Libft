/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:00:25 by gaducurt          #+#    #+#             */
/*   Updated: 2025/02/27 13:20:23 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "../libft.h"

int		ft_printf(const char *str, ...);
int		ft_putnbr(int n);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		ft_putchar(char c);
int		ft_putptr(size_t nbr, char *base);
int		ft_putstr(const char *s);
int		ft_putnbr_unsigned(unsigned int n);

#endif