/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:09:43 by arivero-          #+#    #+#             */
/*   Updated: 2023/06/16 14:19:36 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>

int ft_printf(const char* format, ...);
int	ft_printchar(char c);
int ft_printstr(char *str);
int ft_printnbr(int n);
int ft_printhex(unsigned int n, int uppercase);



#endif
