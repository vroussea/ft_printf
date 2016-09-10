/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:42:55 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/10 21:19:17 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *restrict format, ...)
{
	t_hash	*tab;
	va_list argl;
	int		i;

	i = 0;
	init_hash(&tab);
	va_start(argl, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			//while ()
			i++;
			tab[hash(format[i])](argl, format[i]);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	ft_memdel((void **)tab);
	va_end(argl);
	return (1);
}
