/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:56:48 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/10 17:25:20 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	integer(va_list argl)
{
	ft_putnbr(va_arg(argl, int));
}

void	character(va_list argl)
{
	ft_putchar(va_arg(argl, int));
}

void	string(va_list argl)
{
	ft_putstr(va_arg(argl, char *));
}

void	pointer(va_list argl)
{
	ft_putstr("0x");
	ft_putnbr_base(va_arg(argl, long), 16);
}
