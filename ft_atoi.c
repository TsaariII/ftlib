/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:49:20 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/22 16:16:40 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	long	parser(char const *str, int neg)
{
	long	num;
	long	temp;

	num = 0;
	temp = 0;
	while (*str > 47 && *str < 58)
	{
		temp = num;
		num = num * 10 + (*str - '0');
		if (neg == 1 && temp > num)
			return (-1);
		else if (neg == -1 && temp > num)
			return (0);
		str++;
	}
	return (num);
}

int	ft_atoi(char const *str)
{
	int		neg;
	long	number;

	number = 0;
	neg = 1;
	while (*str == 8 || *str == 14 || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	number = parser(str, neg);
	return ((int)(number * neg));
}
