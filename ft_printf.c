/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:22:03 by arivero-          #+#    #+#             */
/*   Updated: 2023/10/30 10:13:23 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

static int	ft_printformat(va_list args, const char *format)
{
	int	written;

	written = 0;
	if (*format == 'c')
		written += ft_printchar(va_arg(args, int));
	else if (*format == 's')
		written += ft_printstr(va_arg(args, char *));
	else if (*format == 'p')
		written += ft_printhex((unsigned int)va_arg(args, void *), 0);
	else if (*format == 'd' || *format == 'i')
		written += ft_printnbr(va_arg(args, int));
	else if (*format == 'u')
		written += ft_printnbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		written += ft_printhex(va_arg(args, unsigned int), 0);
	else if (*format == 'X')
		written += ft_printhex(va_arg(args, unsigned int), 1);
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

/*#include <stdio.h>

int main(void)
{
	ft_printf("%s", "Hola");
	printf("%u", -1);
	return (0);
}*/
