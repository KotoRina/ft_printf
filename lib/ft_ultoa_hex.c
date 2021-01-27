/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:19:43 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:52:38 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char			*ft_ultoa_hex(unsigned int n, t_setting *set)
{
	char					*str;
	unsigned int			len;
	unsigned int			param;

	len = 1;
	param = n;
	while (param >= 16)
	{
		len++;
		param /= 16;
	}
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (n)
	{
		param = n % 16;
		len--;
		str[len] = param < 10 ? param + 48 : param % 10 + *set->format_inp - 23;
		n /= 16;
	}
	return (str);
}
