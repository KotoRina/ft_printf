/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:28:11 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:28:12 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter.h"

void			get_point(t_setting *set)
{
	char		*str;
	void		*address;

	set->type = 3;
	address = va_arg(set->ap, void *);
	if (!address)
	{
		if (IS_MACOS)
			str = "0x0";
		else
			str = "(nil)";
		set->null = 1;
	}
	if (set->null == 0)
		str = ft_ultoa_perc((unsigned long long int)address);
	if (set->width < ((int)ft_strlen(str) - 2))
		set->width = 0;
	if (set->flag_minus == 1)
		print_minus(set, str);
	else
		print_not_minus(set, str);
	if (set->null == 0)
		free(str);
	set->format_inp++;
}
