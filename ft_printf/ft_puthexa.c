/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:34:36 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/30 18:39:38 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int n, char formatter)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_puthexa((n / 16), formatter);
		len += ft_puthexa((n % 16), formatter);
	}
	if (n >= 0 && n <= 9)
		len += ft_putchar(n + '0');
	else if (n >= 10 && n <= 15)
	{
		if (formatter == 'x')
			len += ft_putchar(n - 10 + 'a');
		else if (formatter == 'X')
			len += ft_putchar(n - 10 + 'A');
	}
	return (len);
}
