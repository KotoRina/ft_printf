/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:27:23 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 13:00:31 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter.h"

void			get_char(t_setting *set)
{
	char	c;

	set->type = 2;
	c = va_arg(set->ap, int);
	main_check_flag(0, 0, set);
	if (set->flag_minus == 1)
	{
		set->all_write += ft_count_putchar(c, 1);
		print_width(set, 1);
	}
	else
	{
		print_width(set, 1);
		set->all_write += ft_count_putchar(c, 1);
	}
	set->format_inp++;
}
