/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:58:50 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/01 17:48:33 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;
	unsigned char		buffer[n];
	size_t				m;
	size_t				i;

	d = dest;
	i = 0;
	m = n;
	while (i < n)
	{
		buffer[i] = s[i];
		i++;
	}
	i = 0;
	while (i < m)
	{
		d[i] = buffer[i];
		i++;
	}
	return (dest);
}
