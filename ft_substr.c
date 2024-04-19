/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:46:31 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/19 15:06:41 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ret;

    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
        len = 0;
    if (ft_strlen(s + start) < len)
        len = ft_strlen(s + start);
    ret = malloc(sizeof(char) * (len + 1));
    if (!ret)
        return (NULL);
    ft_strlcpy(ret, s + start, len + 1);
    return (ret);
}