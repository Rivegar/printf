/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:58:08 by arivero-          #+#    #+#             */
/*   Updated: 2023/11/02 11:23:50 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"
#include <stddef.h>

int	ft_printptr(unsigned long num)
{
	ft_putstr_fd("0x", 1);
	return (ft_printhexl(num) + 2);
}
