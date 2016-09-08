/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:42:55 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/08 18:58:45 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>


hash_t hashtable[length] = {['d']=foo , ['p']=bar};

int	ft_printf(const char *restrict format, ...)
{
	void	**ash_tab;
	char	key[1];
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
			key[0] = format[i];
			//*ash_tab(va_arg(argl, int));
			//ash_tab[8](va_arg(argl, int));
			//integer(va_arg(argl, int));
			//while (ft_isspace(format[i]))
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	ft_memdel((void **)ash_tab);
	va_end(argl);
	return (1);
}
