/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:36:31 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/25 11:07:43 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*result;

	front = 0;
	back = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (front <= back && ft_strchr(set, s1[front]))
		front++;
	while (ft_strchr(set, s1[back]) && back >= 0)
		back--;
	result = (char *)malloc(sizeof(char *) * (back - front + 2));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[front], back - front + 2);
	return (result);
}
