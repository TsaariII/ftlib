/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:47:04 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/18 13:28:48 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t num)
{
    unsigned char *tdest;
    unsigned char *tsrc;

    tdest = (unsigned char*)dest;
    tsrc = (unsigned char*)src;
    
    while (num)
    {
        *tdest = *tsrc;
        tdest++;
        tsrc++;
        num--;
    }
    return (tdest);
}