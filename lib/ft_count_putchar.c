/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_putchar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:33:26 by rin               #+#    #+#             */
/*   Updated: 2021/01/25 17:33:27 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_count_putchar(char c, int n)
{
	int	all_write;

	all_write = 0;
	while (n-- > 0)
	{
		ft_putchar_fd(c, 1);
		all_write++;
	}
	return (all_write);
}
