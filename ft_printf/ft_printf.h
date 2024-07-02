/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:56:22 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/30 18:40:43 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_putchar(char m);
int	ft_putint(int n);
int	ft_putstr(char *str);
int	ft_puthexa(unsigned int n, char formatter);
int	ft_putptr(void *ptr);
int	ft_putuint(unsigned int n);
int	ft_format(va_list args, char format);
int	ft_printf(const char *format, ...);

#endif
