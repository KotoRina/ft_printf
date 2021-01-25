/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_analyze_format.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:54:53 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:23:03 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	reset_input_fl(t_setting *set)
{
	set->type = -1;
	set->width = 0;
	set->prec = -1;
	set->flag_minus = 0;
	set->flag_zero = 0;
	set->extra_zero = 0;
	set->null = 0;
	set->minus = 0;
}

void	main_analyze_format(t_setting *set)
{
	set->format_inp++;
	reset_input_fl(set);
	main_analyze_flag(set);
	main_set_width(set);
	main_set_prec(set);
	main_analyze_type(set);
}
