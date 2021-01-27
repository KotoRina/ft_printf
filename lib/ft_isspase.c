/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:33:42 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:51:35 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_isspace(int value)
{
	if (value == '\t' || value == '\v'
			|| value == '\n' || value == '\r'
			|| value == '\f' || value == ' ')
		return (1);
	return (0);
}
