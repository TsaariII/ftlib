/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:29:28 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/19 10:15:16 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *ptr, size_t num)
{
    unsigned char   *temp;

    temp = (unsigned char*)ptr;
    while (num > 0)
    {
        *temp = 0;
        temp++;
        num--;
    }
}