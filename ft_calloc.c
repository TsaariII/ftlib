/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:49:16 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/30 11:47:57 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t num_elem, size_t elem_size)
{
	void	*mem;
	
	if ((num_elem * elem_size) / num_elem > SIZE_MAX)
		return (NULL);
	mem = malloc(num_elem * elem_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, num_elem * elem_size);
	return (mem);
}
