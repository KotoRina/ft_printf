/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_perc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:28:05 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:28:07 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter.h"

void			get_prec(t_setting *set)
{
	if (IS_MACOS)
	{
		main_check_flag(0, 0, set);
		if (set->flag_minus == 1)
		{
			set->all_write += ft_count_putchar('%', 1);
			print_width(set, 1);
		}
		else
		{
			print_width(set, 1);
			set->all_write += ft_count_putchar('%', 1);
		}
	}
	else
		set->all_write += ft_count_putchar('%', 1);
	set->format_inp++;
}
