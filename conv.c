/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:56:48 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/10 21:42:58 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	integer(va_list argl, char key)
{
	key = (char)key;
	ft_putnbr(va_arg(argl, int));
}

void	character(va_list argl, char key)
{
	key = (char)key;
	ft_putchar(va_arg(argl, int));
}

void	string(va_list argl, char key)
{
	key = (char)key;
	ft_putstr(va_arg(argl, char *));
}

void	hexa(va_list argl, char key)
{
	char	*str;
	char	*tmp;

	if (key == 'p')
		ft_putstr("0x");
	if (key == 'X')
	{
		str = ft_ltoa_base(va_arg(argl, long), 16);
		tmp = str;
		while (*tmp != '\0')
		{
			*tmp = ft_toupper(*tmp);
			tmp++;
		}
		ft_putstr(str);
	}
	else
		ft_putnbr_base(va_arg(argl, long), 16);
}
