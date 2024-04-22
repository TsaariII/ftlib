/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:24:50 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 16:16:10 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *ptr, int ch, size_t num)
{
	unsigned char	*t_ptr;

	t_ptr = (unsigned char *) ptr;
	while (num > 0)
	{
		if (*t_ptr == (char) ch)
			return (t_ptr);
		num--;
		t_ptr++;
	}
	return (NULL);
}
