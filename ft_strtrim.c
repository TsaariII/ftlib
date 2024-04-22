/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:36:31 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 11:58:26 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t head;
    size_t tail;
    char *result;

    head = 0;
    if (!s1 || !set)
        return(NULL);
    tail = ft_strlen(s1) + 1;
    while (ft_strchr(set, s1[tail]) && head <= tail)
        head++;
    if (head > tail)
        return(ft_strdup(""));
    while (ft_strchr(set, s1[tail] && tail >= 0))
        tail--;
    result = (char *)malloc(sizeof(char) * (tail - head + 2));
    if (!result)
        return (NULL);
    ft_strlcpy(result, &s1[head], tail - head + 2);
    return (result);
}