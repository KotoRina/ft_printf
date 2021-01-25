/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_unsi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:28:25 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:28:25 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter.h"

void			get_unsi(t_setting *set)
{
	char	*str;
	int		strlen;

	str = ft_ultoa(va_arg(set->ap, unsigned int));
	strlen = ft_strlen(str);
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
