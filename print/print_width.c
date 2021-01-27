/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_width.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:14:52 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:55:34 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	print_width(t_setting *set, int len)
{
	while (set->width > len && set->width != 0)
	{
		if (set->flag_zero == 1)
		{
			ft_putchar_fd('0', 1);
			set->all_write++;
		}
		else
		{
			ft_putchar_fd(' ', 1);
			set->all_write++;
		}
		set->width--;
	}
}
