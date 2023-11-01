/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:42:29 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/01 15:37:13 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *p;
    unsigned char v;
    
    p = ptr;
    v = (unsigned char)value;
    while (num > 0)
    {
        *p = v;
        p++;
        num--;
    }
    return ptr;
}