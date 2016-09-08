/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:42:55 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/08 17:07:20 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *restrict format, ...)
{
	void	**ash_tab;
	va_list argl;
	int		i;

	i = 0;
	ash_tab = init_hash();
	va_start(argl, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
		//	ash_tab[hash(format[i + 1])](va_arg(argl, int));
			integer(va_arg(argl, int));
			//while (ft_isspace(format[i]))
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	ft_memdel(ash_tab);
	va_end(argl);
	return (1);
}
