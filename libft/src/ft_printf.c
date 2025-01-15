/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukhanfa <oukhanfa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 21:33:22 by oukhanfa          #+#    #+#             */
/*   Updated: 2025/01/15 00:57:19 by oukhanfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_handle_format(char specifier, va_list args)
{
	int	len;

	len = 0;
	if (specifier == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		len += ft_putstr("0x")
			+ ft_putnbr_hex((unsigned long)va_arg(args, void *), 0);
	else if (specifier == 'd' || specifier == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		len += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (specifier == 'x')
		len += ft_putnbr_hex(va_arg(args, unsigned int), 0);
	else if (specifier == 'X')
		len += ft_putnbr_hex(va_arg(args, unsigned int), 1);
	else if (specifier == '%')
		len += ft_putchar('%');
	else
		len += ft_putchar(specifier);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (len);
			len += ft_handle_format(format[i], args);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
