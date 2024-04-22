/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:00:29 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 10:59:51 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t s;

    s = 0;
    if (size == 0)
        return(ft_strlen(dest));
    while (s < size - 1 && src[s])
    {
        dest[s] = src[s];
        s++;
    }
    dest[s] = '\0';
    return (s);
}