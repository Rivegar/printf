/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:08:01 by arivero-          #+#    #+#             */
/*   Updated: 2023/06/16 12:13:00 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int ft_printstr(char *str)
{
	int i;

	i =  0;
	if(str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while(str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}
