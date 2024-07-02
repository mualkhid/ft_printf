/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:35:53 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/30 18:39:53 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	if (ptr == 0)
		len += ft_putchar('0');
	else
		len += ft_puthexa((unsigned int)ptr, 'x');
	return (len);
}
