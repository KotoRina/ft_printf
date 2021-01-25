/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getter.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:28:32 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:28:47 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GETTER_H
# define GETTER_H

# include "../lib/lib.h"
# include "../main_printf/types.h"
# include "../main_printf/ft_printf.h"
# include "../print/print.h"
# include <stdarg.h>
# include <unistd.h>

# define MIN -2147483648

void				get_char(t_setting *finfo);
void				get_string(t_setting *finfo);
void				get_int(t_setting *finfo);
void				get_unsi(t_setting *finfo);
void				get_hexa(t_setting *finfo);
void				get_prec(t_setting *finfo);
void				get_point(t_setting *finfo);

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

#endif