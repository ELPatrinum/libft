/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:39:22 by muel-bak          #+#    #+#             */
/*   Updated: 2023/10/30 11:39:24 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void  *dest, const void *src, size_t n)
{
  unsigned char *d = dest;
  const unsigned char *s = src;

  size_t i = 0;
  while (i < n)
  {
    d[i] = s[i];
    i++;
  }
  return (dest);
}
