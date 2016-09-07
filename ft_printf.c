/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:42:55 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/07 19:36:29 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hash(const char *key)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (key[i] != '\0')
	{
		count += key[i];
		i++;
	}
	ft_putendl(ft_itoa((count % 45) / 1.2));
	return (1);
}

int	ft_printf(const char *restrict format, ...)
{
	//hash
	return (1);
}
