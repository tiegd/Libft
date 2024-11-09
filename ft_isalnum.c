/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:16:22 by gaducurt          #+#    #+#             */
/*   Updated: 2024/11/09 15:19:55 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return(1);
    return(0);
}