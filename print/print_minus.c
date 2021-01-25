/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_minus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:14:40 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:22:32 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	print_minus(t_setting *set, char *str)
{
	if (set->prec < 0)
	{
		set->minus == 1 ? set->all_write += ft_count_putchar('-', 1) : 0;
		ft_putstr_fd(str, 1);
		set->all_write += ft_strlen(str);
		print_width(set, ft_strlen(str));
	}
	else
	{
		set->minus == 1 ? set->all_write += ft_count_putchar('-', 1) : 0;
		set->all_write += ft_count_putchar('0', set->extra_zero);
		print_prec(set, str, set->prec);
		print_width(set, set->prec);
	}
}

void	print_not_minus(t_setting *set, char *str)
{
	if (set->prec < 0)
	{
		if (set->minus == 1 && set->width > 0 && set->flag_zero == 1)
		{
			set->all_write += ft_count_putchar('-', 1);
			set->minus = 0;
		}
		print_width(set, (int)ft_strlen(str));
		set->minus == 1 ? set->all_write += ft_count_putchar('-', 1) : 0;
		ft_putstr_fd(str, 1);
		set->all_write += ft_strlen(str);
	}
	else
	{
		if (set->minus == 1 && set->width > 0 && set->flag_zero == 1)
		{
			set->all_write += ft_count_putchar('-', 1);
			set->minus = 0;
		}
		print_width(set, set->prec);
		set->minus == 1 ? set->all_write += ft_count_putchar('-', 1) : 0;
		set->all_write += ft_count_putchar('0', set->extra_zero);
		print_prec(set, str, set->prec);
	}
}