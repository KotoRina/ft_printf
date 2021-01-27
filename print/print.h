/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:14:35 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 12:55:57 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "../main_printf/types.h"
# include "../lib/lib.h"
# include "../getter/getter.h"

void	print_width(t_setting *set, int len);
void	print_prec(t_setting *set, char *str, int prec);
void	print_minus(t_setting *set, char *str);
void	print_not_minus(t_setting *set, char *str);

#endif
