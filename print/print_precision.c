/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:14:47 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:55:30 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	print_prec(t_setting *set, char *str, int prec)
{
	int i;

	i = 0;
	while (str[i] && i < prec)
	{
		ft_putchar_fd(str[i], 1);
		i++;
		set->all_write++;
	}
}
