/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:38:15 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:33:14 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef TYPES_H
# define TYPES_H

# include <stdarg.h>
# include <unistd.h>

typedef struct		s_setting
{
	va_list		ap;
	const char	*format_inp;
	int			type;
	int			width;
	int			prec;
	int			flag_minus;
	int			flag_zero;
	int			extra_zero;
	int			null;
	int			minus;
	int			all_write;
}					t_setting;

#endif