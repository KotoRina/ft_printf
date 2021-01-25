/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rin <rin@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:34:34 by rin               #+#    #+#             */
/*   Updated: 2021/01/26 01:20:13 by rin              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include "../main_printf/types.h"
# include <unistd.h>
# include <stdlib.h>

void				ft_bzero(void *dict, size_t count);
void				*ft_malloc(size_t size);
size_t				ft_strlen(const char *s);
int					ft_count_putchar(char c, int n);
int					ft_count_putstr(char *str);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
int					ft_atoi(const char *nptr);
char				*ft_itoa(int n);
char				*ft_ultoa(unsigned int n);
char				*ft_ultoa_perc(unsigned long long int num);
char				*ft_ultoa_hex(unsigned int n, t_setting *set);
int					ft_isdigit(int value);
int					ft_isspace(int value);
int					ft_numdig(int n, int base);

#endif
