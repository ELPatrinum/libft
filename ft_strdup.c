/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:10:20 by muel-bak          #+#    #+#             */
/*   Updated: 2023/11/03 15:33:12 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	char *ptr;
	size_t i;

	ptr = malloc((ft_strlen(str) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while(i < ft_strlen(str))
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    const char *original = "Hello, World!";
    char *duplicate = strdup(original);
	char *mydup = ft_strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        printf("myDuplicate: %s\n", mydup);

        // Remember to free the memory when you're done
        free(duplicate);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
