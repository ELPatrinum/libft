/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:09:17 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/05 21:58:35 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*the_spliter(size_t *i, char const *s, char c)
{
	size_t	index;
	size_t	size;
	size_t	tmp;
	char	*res;

	while (s[*i] && s[*i] == c)
		(*i)++;
	tmp = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	size = *i - tmp;
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	index = 0;
	while (tmp + index < *i)
	{
		res[index] = s[tmp + index];
		index++;
	}
	res[index] = '\0';
	return (res);
}

static char	**split_free(char **arr)
{
	size_t	i;

	i = 0;
	if (arr)
	{
		while (arr[i])
		{
			free(arr[i]);
			i++;
		}
		free(arr);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	wc;
	size_t	i;
	char	**res;

	if (!s)
		return (NULL);
	i = 0;
	index = 0;
	wc = count_strings(s, c);
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!res)
		return (NULL);
	while (index < wc)
	{
		res[index] = the_spliter(&i, s, c);
		if (!res[index])
			return (split_free(res));
		index++;
	}
	res[wc] = NULL;
	return (res);
}
