/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:27:29 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:27:30 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter.h"

static	int		check_minus(int num, t_setting *set)
{
	if (num < 0)
	{
		if (num == MIN)
			set->width -= 1;
		else
		{
			set->minus = 1;
			num = num * -1;
			set->width -= 1;
		}
	}
	return (num);
}

void			get_int(t_setting *set)
{
	int		num;
	int		strlen;
	char	*str;

	num = va_arg(set->ap, int);
	num = check_minus(num, set);
	str = ft_itoa(num);
	strlen = (int)ft_strlen(str);
	if (set->prec > strlen)
		set->extra_zero = set->prec - strlen;
	main_check_flag(strlen, str, set);
	if (set->flag_minus == 1)
		print_minus(set, str);
	else
		print_not_minus(set, str);
	free(str);
	set->format_inp++;
}
