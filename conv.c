/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:56:48 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/15 19:06:30 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

char	*integer(va_list argl, char key)
{
	char	*new;

	key = (char)key;
	new = ft_itoa(va_arg(argl, int));
	return (new);
}

char	*character(va_list argl, char key)
{
	char	*new;
	char	c;

	if (!(new = ft_strnew(1)))
		return (NULL);
	key = (char)key;
	c = (va_arg(argl, int));
	new[0] = c;
	return (new);
}

char	*string(va_list argl, char key)
{
	char	*new;

	key = (char)key;
	new = ft_strdup(va_arg(argl, char *));
	return (new);
}

char	*hexa(va_list argl, char key)
{
	char	*new;
	char	*tmp;

	if (key == 'p')
	{
		new = ft_strdup("0x");
		tmp = ft_ltoa_base(va_arg(argl, long), 16);
		new = ft_strrealloc(new, ft_strlen(tmp));
		ft_strncat(new, tmp, ft_strlen(tmp));
	}
	else
	{
		new = ft_ltoa_base(va_arg(argl, unsigned int), 16);
		if (key == 'X')
		{
			tmp = new;
			while (*tmp != '\0')
			{
				*tmp = ft_toupper(*tmp);
				tmp++;
			}
		}
	}
	return (new);
}
