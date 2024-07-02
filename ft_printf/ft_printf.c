/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 20:56:17 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/30 18:41:50 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putint(va_arg(args, int));
	else if (format == 'u')
		len += ft_putuint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_puthexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		char_counter;

	va_start(args, format);
	i = 0;
	char_counter = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			char_counter += ft_format(args, format[i]);
		}
		else
			char_counter += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (char_counter);
}
// int main()
// {
// 	ft_printf("%d\n", ft_puthexa(42, 'x'));
// 	// ft_printf("\n%d", ft_putchar('c'));
// 	// ft_printf("%d\n", ft_putstr("Munia"));
// 	ft_printf("%d\n", ft_putptr("Munia"));
// 	// ft_printf("%d\n", ft_putint(42));
// 	// ft_printf("%d\n", ft_putuint(42));
// }
