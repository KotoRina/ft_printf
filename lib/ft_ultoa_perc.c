/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_perc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:19:37 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:52:49 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char			*ft_ultoa_perc(unsigned long long int num)
{
	char					*str;
	unsigned int			len;
	unsigned long long int	param;

	len = 1;
	param = num;
	while (param >= 16)
	{
		param /= 16;
		len++;
	}
	len += 2;
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[0] = '0';
	str[1] = 'x';
	str[len] = '\0';
	while (len > 2)
	{
		param = num % 16;
		len--;
		str[len] = param < 10 ? param + 48 : param % 10 + 'a';
		num /= 16;
	}
	return (str);
}
