/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:13:18 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 16:13:44 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t num)
{
	char	*ptr_hay;
	size_t	i;
	size_t	loop;
	size_t	need_len;

	i = 0;
	loop = 0;
	ptr_hay = (char *)haystack;
	if (!(*needle))
		return (ptr_hay);
	if (num == 0 || !(*haystack))
		return (NULL);
	need_len = ft_strlen(needle);
	while (*ptr_hay && loop <= num - need_len)
	{
		while (ptr_hay[i] == needle[i] && ptr_hay[i] && needle[i])
			i++;
		if (needle[i] == '\0')
			return (ptr_hay);
		i = 0;
		ptr_hay++;
		loop++;
	}
	return (NULL);
}
