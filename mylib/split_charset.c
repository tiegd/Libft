/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_charset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaducurt <gaducurt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 22:33:36 by ludebion          #+#    #+#             */
/*   Updated: 2026/01/14 15:40:50 by gaducurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include "mylib.h"
#include <stdbool.h>
#include <stdlib.h>

void	free_strs(char **strs)
{
	size_t	i;

	i = 0;
	if (!strs)
		return ;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	strs = NULL;
}

static bool	is_sep(char c, char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (true);
		i++;
	}
	return (false);
}

static char	*substr_dup(char *s, size_t len)
{
	char	*dup;
	size_t	i;

	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static char	**add_word(char **arr, char *start, size_t len)
{
	char	**new_arr;
	size_t	count;
	size_t	i;

	count = 0;
	while (arr && arr[count])
		count++;
	new_arr = malloc((count + 2) * sizeof(char *));
	if (!new_arr)
		return (NULL);
	i = 0;
	while (i < count)
	{
		new_arr[i] = arr[i];
		i++;
	}
	new_arr[count] = substr_dup(start, len);
	new_arr[count + 1] = NULL;
	free(arr);
	return (new_arr);
}

char	**split_charset(char *s, char *charset)
{
	char	**res;
	size_t	i;
	size_t	start;

	if (!s || !charset)
		return (NULL);
	res = NULL;
	i = 0;
	while (s[i])
	{
		while (s[i] && is_sep(s[i], charset))
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && !is_sep(s[i], charset))
			i++;
		res = add_word(res, &s[start], i - start);
		if (!res)
			return (NULL);
	}
	return (res);
}
