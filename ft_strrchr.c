/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:16:44 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/01 15:24:51 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int get_locator(const char *str, int character)
{
    int i;
    int locator;

    i = 0;
    locator = -1;
    while (str[i] != '\0')
    {
        if (str[i] == character)
        {
            locator = i;
        }
        i++;
    }

    return locator;
}

char *ft_strrchr(const char *str, int character)
{
    int locator;
    
    locator = get_locator(str, character);
    if (locator >= 0)
    {
        return (char *)&str[locator];
    }
    else if (character == '\0')
    {
        return (char *)&str[0];
    }
    else
    {
        return NULL;
    }
}
