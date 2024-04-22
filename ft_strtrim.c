/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:36:31 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 14:06:11 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t front;
    size_t back;
    size_t trim_len;
    char *result;

    front = 0;
    back = ft_strlen(s1) + 1;
    if (!s1 || !set)
        return(NULL);
    while (s1[front] != '\0' && ft_strchr(set, s1[front]) != '\0')
        front++;
    while (ft_strchr(set, s1[back - 1] != '\0' && back > front))
        back--;
    trim_len = back - front;
    result = (char *)malloc(trim_len + 1);
    if (!result)
        return (NULL);
    ft_strlcpy(result, s1 + front, trim_len);
    return (result);
}