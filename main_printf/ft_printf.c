/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:43:40 by rin               #+#    #+#             */
/*   Updated: 2021/01/25 17:54:35 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_setting	*set;
	int			all_write;

	if (!format)
		return (-1);
	set = (t_setting *)ft_malloc(sizeof(t_setting));
	va_start(set->ap, format);
	set->format_inp = format;
	while (*set->format_inp)
	{
		while (*set->format_inp && *set->format_inp != '%')
		{
			ft_putchar_fd(*set->format_inp, 1);
			set->all_write++;
			set->format_inp++;
		}
		if (*set->format_inp == '%')
			main_analyze_format(set);
	}
	va_end(set->ap);
	all_write = set->all_write;
	free(set);
	return (all_write);
}
