/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:36:20 by mualkhid          #+#    #+#             */
/*   Updated: 2023/12/24 10:58:25 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_putuint(n / 10);
		len += ft_putuint(n % 10);
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}
