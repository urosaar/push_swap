/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhanfa <oukhanfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 20:55:53 by oukhanfa          #+#    #+#             */
/*   Updated: 2025/01/15 00:57:09 by oukhanfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putnbr_hex(unsigned long n, int is_upper)
{
	char	*hex_digits;
	int		len;

	len = 0;
	if (is_upper)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	if (n >= 16)
	{
		len += ft_putnbr_hex(n / 16, is_upper);
		len += ft_putchar(hex_digits[n % 16]);
	}
	else
	{
		len += ft_putchar(hex_digits[n]);
	}
	return (len);
}
