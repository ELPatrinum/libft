/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:51:12 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/02 18:31:35 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	size;
	void	*located;

	size = num_elements * element_size;
	located = malloc(size);
	if (located == NULL)
		return (NULL);
	ft_bzero(located, size);
	return (located);
}
