/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:33:06 by rin               #+#    #+#             */
/*   Updated: 2021/01/25 17:33:09 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static	int		ft_spase(char *str)
{
	int len;

	len = 0;
	while (str[len] == '\t' || str[len] == '\n' || str[len] == '\r'
		|| str[len] == '\v' || str[len] == '\f' || str[len] == ' ')
		len++;
	return (len);
}

static int		ft_conv(long long result, int min)
{
	int result_conv;

	result = result * min;
	result_conv = (int)result;
	if (result == result_conv)
		return (result_conv);
	else
		return (0);
}

static	int		ft_count(long long n)
{
	int len;

	len = 0;
	while (n >= 1)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int				ft_atoi(const char *str)
{
	int			len;
	int			min;
	long long	result;

	len = ft_spase((char *)str);
	min = 1;
	result = 0;
	if (str[len] == '-')
	{
		min = -1;
		len++;
	}
	else if (str[len] == '+')
		len++;
	while (str[len] >= '0' && str[len] <= '9')
	{
		result = (result * 10) + (str[len++] - '0');
		if (ft_count(result) > 10 && min == 1)
			return (-1);
		if (ft_count(result) > 10 && min == -1)
			return (0);
	}
	return (ft_conv(result, min));
}