/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_analyze_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:54:58 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:04:54 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	main_analyze_type(t_setting *set)
{
	if (*set->format_inp == 'c')
		get_char(set);
	else if (*set->format_inp == 's')
		get_string(set);
	else if (*set->format_inp == 'd' || *set->format_inp == 'i')
	{
		set->type = 1;
		get_int(set);
	}
	else if (*set->format_inp == 'u')
		get_unsi(set);
	else if (*set->format_inp == 'x' || *set->format_inp == 'X')
		get_hexa(set);
	else if (*set->format_inp == 'p')
		get_point(set);
	else if (*set->format_inp == '%')
		get_prec(set);
	else
	{
		ft_putstr_fd("error", 1);
	}
}
