/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:28:18 by rin               #+#    #+#             */
/*   Updated: 2021/01/27 17:55:39 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getter.h"

void			get_string(t_setting *set)
{
	char		*str;
	int			strlen;

	str = va_arg(set->ap, char *);
	if (!str)
	{
		str = "(null)";
		if (!IS_MACOS && set->prec < 6 && set->prec >= 0)
			str = "";
	}
	if (set->prec == 0)
		str = "";
	strlen = (int)ft_strlen(str);
	m_check_frag_string(strlen, str, set);
	if (set->flag_minus == 1)
		print_minus(set, str);
	else
		print_not_minus(set, str);
	set->format_inp++;
}
