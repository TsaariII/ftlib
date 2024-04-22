/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:09:31 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 17:07:22 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	int		in_word;
	size_t	count;
	
	in_word = 0;
	count = 0;
	while(*s != '\0')
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	free_array(char **array, size_t i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

static char	**helper(char const *s, char c, size_t i, char **result)
{
	char const	*start;
	
	while (*s)
	{
		if (*s && *s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = (char *)malloc(sizeof(char) * (s - start + 1));
			if(!result[i])
			{
				free_array(result, i);
				return (NULL);
			}
			ft_strlcpy(result[i], start, s - start + 1);
			i++;
		}
		while (*s && *s == c)
			s++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**result;

	i = 0;
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !result)
		return (NULL);
	return (helper(s, c, i, result));
}