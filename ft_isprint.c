/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muel-bak <muel-bak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:37:09 by muel-bak          #+#    #+#             */
/*   Updated: 2023/10/30 11:37:15 by muel-bak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int  c)
{
  if (c >= 32 && c <= 126)
    return (1);
  else
    return (0);
}
