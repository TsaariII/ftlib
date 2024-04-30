/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:49:16 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/30 12:24:38 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num_elem, size_t elem_size)
{
	void	*mem;

	if (num_elem != 0)
	{
		if (elem_size > SIZE_MAX / num_elem)
			return (NULL);
	}
	mem = malloc(num_elem * elem_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, num_elem * elem_size);
	return (mem);
}
