/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:42:55 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/15 18:29:59 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*void_funct(va_list argl, char key)
{
	char	tmpc;

	if (argl)
		tmpc = key;
	return (NULL);
}

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
		if (format[i] == '%')
		{
			if (!(str = ft_strrealloc(str, i)))
				return (-1);
			ft_strncat(str, format, i);
			format += i + 1;
			i = 0;
			if (!(new = tab[(unsigned char)*format](argl, *format)))
				return (-1);
			if (!(str = ft_strrealloc(str, ft_strlen(new))))
				return (-1);
			ft_strncat(str, new, ft_strlen(new));
			ft_strdel(&new);
			format++;
		}
		else
			i++;
	}
	if (!(str = ft_strrealloc(str, i)))
		return (-1);
	ft_strncat(str, format, i);
	size = ft_strlen(str);
	ft_putstr(str);
	ft_strdel(&str);
	return (size); 
}

int			ft_printf(const char *restrict format, ...)
{
	t_hash	*tab;
	int		ret;
	va_list	argl;

	va_start(argl, format);
	if((init_hash(&tab)) == -1)
		return (-1);
	ret = ft_read(argl, tab, format);
	ft_memdel((void **)&tab);
	va_end(argl);
	return (ret);
}
