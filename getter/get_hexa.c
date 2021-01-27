/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:27:23 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 13:00:41 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter.h"

void			get_hexa(t_setting *set)
{
	char				*str;
	int					strlen;
	unsigned int		num;

	num = va_arg(set->ap, unsigned int);
	if (num == 0)
	{
		str = "0";
		set->null = 1;
	}
	else
		str = ft_ultoa_hex(num, set);
	strlen = ft_strlen(str);
	if (set->prec > strlen)
		set->extra_zero = set->prec - strlen;
	main_check_flag(strlen, str, set);
	if (set->flag_minus == 1)
		print_minus(set, str);
	else
		print_not_minus(set, str);
	if (set->null == 0)
		free(str);
	set->format_inp++;
}
