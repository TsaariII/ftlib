/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:59:30 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/17 13:19:52 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *str;
    
    str = (unsigned char *) ptr;
    while (num)
    {
        str = (unsigned char )value;
        str++;
        num--;
    }
    return (str);
}