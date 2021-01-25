/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_set_prec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:55:03 by rin               #+#    #+#             */
/*   Updated: 2021/01/25 17:55:04 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	main_set_prec(t_setting *set)
{
	if (*set->format_inp == '.')
	{
		set->format_inp++;
		if (*set->format_inp == '*')
		{
			set->prec = va_arg(set->ap, int);
			set->format_inp++;
		}
		else if (*set->format_inp >= '0' && *set->format_inp <= '9')
		{
			set->prec = 0;
			while (*set->format_inp >= '0' && *set->format_inp <= '9')
			{
				set->prec = (set->prec * 10) + (*set->format_inp - '0');
				set->format_inp++;
			}
		}
		else
			set->prec = 0;
	}
}