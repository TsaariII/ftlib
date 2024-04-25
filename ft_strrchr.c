/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:26:32 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/25 12:43:48 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char	*ptr_s;
	int		len;

	ptr_s = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (ptr_s[len] == c)
			return (&(ptr_s[len]));
		len--;
	}
	return (NULL);
}
