/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:07:12 by arivero-          #+#    #+#             */
/*   Updated: 2023/11/02 11:19:41 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_printhexu(unsigned long n)
{
	char	*str;
	size_t	i;
	char	*base;

	base = "0123456789ABCDEF";
	str = ft_itoa_base(n, base);
	i = 0;
	ft_putstr_fd(str, 1);
	i = ft_strlen(str);
	free (str);
	return (i);
}
