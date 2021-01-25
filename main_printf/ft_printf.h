/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:42:55 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:12:42 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "types.h"
# include "../lib/lib.h"
# include "../print/print.h"
# include <stdarg.h>
# include <unistd.h>

# define MIN -2147483648

int		ft_printf(const char *format, ...);
void	main_analyze_format(t_setting *set);
void	main_analyze_flag(t_setting *set);
void	main_analyze_type(t_setting *set);
void	main_set_width(t_setting *set);
void	main_set_prec(t_setting *set);
void	main_check_flag(int strlen, char *str, t_setting *set);
void	m_check_frag_string(int strlen, char *str, t_setting *set);

# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

#endif
