/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:54:32 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/01 21:03:28 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;
    
    i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i] && i < n - 1)
    {
            i++;
    }
    return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}