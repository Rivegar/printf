/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:22:03 by arivero-          #+#    #+#             */
/*   Updated: 2023/11/06 12:46:50 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"
#include <stddef.h>

static int	ft_printformat(va_list args, const char *format)
{
	int	written;

	written = 0;
	if (*format == 'c')
		written += ft_printchar(va_arg(args, int));
	else if (*format == 's')
		written += ft_printstr(va_arg(args, char *));
	else if (*format == 'p')
		written += ft_printptr(va_arg(args, unsigned long));
	else if (*format == 'd' || *format == 'i')
		written += ft_printnbr(va_arg(args, int));
	else if (*format == 'u')
		written += ft_printunbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		written += ft_printhexl(va_arg(args, unsigned int));
	else if (*format == 'X')
		written += ft_printhexu(va_arg(args, unsigned int));
	else if (*format == '%')
		written += ft_printchar('%');
	return (written);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		written;

	i = 0;
	written = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			written += ft_printformat(args, format);
		}
		else
		{
			written += ft_printchar(*format);
		}
		format++;
	}
	va_end(args);
	return (written);
}
