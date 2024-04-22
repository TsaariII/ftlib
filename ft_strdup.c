/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:52:47 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 14:55:59 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*ptr;
	int		len;

	len = ft_strlen(src);
	dup = malloc(len);
	if (src == NULL || dup == NULL)
		return (NULL);
	ptr = dup;
	while (*src)
	{
		*dup = *src;
		dup++;
		src++;
	}
	return (ptr);
}
