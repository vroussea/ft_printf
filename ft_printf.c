/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:42:55 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/11 20:09:57 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_read(va_list argl, t_hash *tab, const char *restrict format)
{
	size_t	i;
	size_t	size;
	char	*str;
	char	*new;

	i = 0;
	str = ft_strnew(0);
	while (format[i] != '\0')
	{
	/*	if (i == 0)
		{
			ft_putchar(format[i]);
			ft_putchar(' ');
			ft_putendl(str);
			ft_putnbr(i);
		}*/
		if (format[i] == '%')
		{
			ft_strrealloc(str, i);
			ft_strncat(str, format, i);
			format += i + 1;
			new = tab[hash(*format)](argl, *format);
			size = ft_strlen(new);
			ft_strrealloc(str, size);
			ft_strncat(str, new, size);
			ft_strdel(&new);
			//format++;
			i = 0;
		}
		else
			i++;
	}
	ft_strrealloc(str, i);	
	ft_strncat(str, format, i);
	size = ft_strlen(str);
	ft_putstr(str);
	ft_strdel(&str);
	return (size); 
}

int			ft_printf(const char *restrict format, ...)
{
	t_hash	*tab;
	va_list argl;
	int		ret;

	if((init_hash(&tab)) == -1)
		return (-1);
	va_start(argl, format);
	ret = ft_read(argl, tab, format);
	ft_memdel((void **)tab);
	va_end(argl);
	return (ret);
}
