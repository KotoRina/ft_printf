/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:19:30 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:52:19 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

char	*ft_ultoa(unsigned int n)
{
	char			*str;
	unsigned int	count_n;
	int				len;

	len = 1;
	count_n = n;
	while (count_n >= 10)
	{
		len++;
		count_n /= 10;
	}
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	while (n >= 10)
	{
		len--;
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	len--;
	str[len] = n % 10 + '0';
	return (str);
}
