/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_putstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:33:31 by rin               #+#    #+#             */
/*   Updated: 2021/01/25 17:33:32 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int    ft_count_putstr(char *str)
{
    int all_write;

    if (!str)
		return (0);
    while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
        all_write++;
	}
    return (all_write);
}