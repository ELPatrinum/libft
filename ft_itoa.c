/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:40:31 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/08 09:34:51 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count = 1;
		n = n * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static int	converte(char *ascii, int n, int i)
{
	if (n >= 10)
	{
		i = converte(ascii, n / 10, i);
	}
	ascii[i] = (n % 10) + '0';
	return (i + 1);
}

static char	*minval_orzero(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int n)
{
	char	*ascii;
	int		i;

	i = 0;
	if (n == -2147483648 || n == 0)
		return (minval_orzero(n));
	ascii = malloc(digit_count(n) + 1);
	if (ascii == NULL)
		return (NULL);
	if (n < 0)
	{
		ascii[0] = '-';
		n = -n;
		i = 1;
	}
	i = converte(ascii, n, i);
	ascii[i] = '\0';
	return (ascii);
}
