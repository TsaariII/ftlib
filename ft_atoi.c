/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzharkev <nzharkev@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:49:20 by nzharkev          #+#    #+#             */
/*   Updated: 2024/04/30 12:09:54 by nzharkev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_space(int n)
{
	if (n == ' ' || (n >= '\t' && n <= '\r'))
		return (1);
	return (0);
}

int	ft_atoi(char const *str)
{
	int		i;
	int		p_n;
	long	num;

	i = 0;
	p_n = 1;
	num = 0;
	while (check_space(*str))
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			p_n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = ((num * 10) + p_n * (str[i] - 48));
		if (p_n == 1 && num < 0)
			return (-1);
		else if (p_n == -1 && num > 0)
			return (0);
		i++;
	}
	return ((int)(num));
}
