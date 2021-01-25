/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_set_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:55:08 by rin               #+#    #+#             */
/*   Updated: 2021/01/25 17:55:09 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	main_set_width(t_setting *set)
{
	if (*set->format_inp == '*')
	{
		set->width = va_arg(set->ap, int);
		if (set->width < 0)
		{
			set->flag_minus = 1;
			set->width *= -1;
		}
		set->format_inp++;
	}
	else if (*set->format_inp >= '0' && *set->format_inp <= '9')
	{
		set->width = 0;
		while (*set->format_inp >= '0' && *set->format_inp <= '9')
		{
			set->width = (set->width * 10) + (*set->format_inp - '0');
			set->format_inp++;
		}
	}
}