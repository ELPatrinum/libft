/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:09:17 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/05 20:56:24 by muel-bak         ###   ########.fr       */
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

static char	*extract_substring(char const *s, char c, size_t *start_index)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	*substring;

	i = *start_index;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	substring = malloc((len + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		substring[j] = s[*start_index];
		(*start_index)++;
		j++;
	}
	substring[j] = '\0';
	return (substring);
}

int helper(size_t result_index, char **result)
{
	while (result_index > 0)
	{
		free(result[result_index - 1]);
		result_index--;
	}
	return (-1);
}
static int	split_string(char const *s, char c, char **result)
{
	size_t	start_index;
	size_t	result_index;
	char	*substring;

	start_index = 0;
	result_index = 0;
	while (s[start_index] != '\0')
	{
		if (s[start_index] != c)
		{
			substring = extract_substring(s, c, &start_index);
			if (substring == NULL)
				helper(result_index, result);
			result[result_index] = substring;
			result_index++;
		}
		else
			start_index++;
	}
	result[result_index] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	num_strings;
	char	**result;

	if (s == NULL)
		return (NULL);
	num_strings = count_strings(s, c);
	result = malloc((num_strings + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (split_string(s, c, result) == -1)
	{
		free(result);
		return (NULL);
	}
	return (result);
}
