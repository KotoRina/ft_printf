/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:29:29 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:54:22 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	main_check_flag(int strlen, char *str, t_setting *set)
{
	if (set->prec > -1 && set->prec < strlen && *str != '0')
		set->prec = strlen;
	if (set->flag_zero == 1 && set->flag_minus == 1)
		set->flag_zero = 0;
	if (set->flag_zero == 1 && set->prec >= 0)
		set->flag_zero = 0;
	if (set->type == 1 && set->width == strlen && *str != '0')
		set->width = 0;
	if (set->width <= 1 && (set->type == 2 || set->type == 3))
		set->width = 0;
	if ((set->flag_zero == 1 && set->type == 2)
	|| (set->flag_zero == 1 && set->flag_minus == 1 && set->type == 3))
		set->flag_zero = 0;
}

void	m_check_frag_string(int strlen, char *str, t_setting *set)
{
	if (set->width <= (int)ft_strlen(str - set->prec))
		set->width = 0;
	if (set->prec > strlen)
		set->prec = strlen;
	if (set->flag_zero == 1)
		set->flag_zero = 0;
}
