/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:55:14 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/01 22:07:48 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = ptr1;
	p2 = ptr2;
	i = 0;
	while (p1[i] && p2[i] && p1[i] == p2[i] && i < num)
	{
		i++;
	}
	return (p1[i] - p2[i]);
}
