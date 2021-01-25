/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_analyze_flag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:54:48 by rin               #+#    #+#             */
/*   Updated: 2021/01/25 17:54:49 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	main_analyze_flag(t_setting *set)
{
	while (*set->format_inp == '0' || *set->format_inp == '-')
	{
		if (*set->format_inp == '0')
		{
			set->flag_zero = 1;
			set->format_inp++;
		}
		if (*set->format_inp == '-')
		{
			set->flag_minus = 1;
			set->format_inp++;
		}
	}
}
