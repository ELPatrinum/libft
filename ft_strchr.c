/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:56:01 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/01 12:27:02 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == c)
            return ((char*)str);
        str++;
    }
    if (c == '\0')
        return ((char*)str);
    return (NULL);
}
