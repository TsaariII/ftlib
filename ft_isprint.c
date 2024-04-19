/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:09:00 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/17 10:11:08 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int ch)
{
    if (ch >= 33 && ch <= 126)
        return (1);
    else
        return (0);
}