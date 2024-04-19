/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:26:32 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/18 14:55:07 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *ptr_s;
    int len;
    
    ptr_s = (char *)s;
    len = ft_strlen(s);
    ptr_s += len - 1;
    if (c == 0)
        return (ptr_s + 1);
    while (*ptr_s)
    {
        if (*ptr_s == (char)c)
            return (ptr_s);
        ptr_s--;
    }
    return (NULL);
}