/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:33:48 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:51:52 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

static int		coln(int n)
{
	int			res;

	res = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

static void		pos(int size, char *ptr, int n)
{
	ptr[size] = '\0';
	while (size > 0)
	{
		ptr[size - 1] = '0' + (n % 10);
		n = n / 10;
		size--;
	}
}

static void		neg(int size, char *ptr, int n)
{
	ptr[size + 1] = '\0';
	ptr[0] = '-';
	while (size > 0)
	{
		ptr[size] = '0' - (n % 10);
		n = n / 10;
		size--;
	}
}

char			*ft_itoa(int n)
{
	char		*ptr;
	int			size;

	size = coln(n);
	if (n >= 0)
	{
		if ((ptr = (char *)malloc(sizeof(char) * size + 1)) == 0)
			return (0);
		pos(size, ptr, n);
	}
	else
	{
		if ((ptr = (char *)malloc(sizeof(char) * size + 2)) == 0)
			return (0);
		neg(size, ptr, n);
	}
	return (ptr);
}
