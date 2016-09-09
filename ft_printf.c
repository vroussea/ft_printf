/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:42:55 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/09 13:28:30 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *restrict format, ...)
{
	t_hash	*tab;
	char	key[1];
	va_list argl;
	int		i;

	i = 0;
	tab = init_hash(&tab);
	va_start(argl, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			key[0] = format[i];
			//*tab(va_arg(argl, int));
			//tab[8](va_arg(argl, int));
			//integer(va_arg(argl, int));
			//while (ft_isspace(format[i]))
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	ft_memdel((void **)tab);
	va_end(argl);
	return (1);
}
