/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analyse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 18:28:58 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/15 18:48:01 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	init_flags(const char *restrict format, char ***flags)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = format;
	while (*tmp != '\0')
	{
		if (*tmp == %)
			i++;
		tmp++;
	}
	if (!(*flags = (char **)ft_memalloc(sizeof(char *) * i + 1)))
		return (-1);
	**flags = format;
	return (0);
}

int	analyse(const char *restrict format, char ***flags)
{
	t_flags	*flags_hash;

	if ((init_flags(format, flags)) == -1)
		return (-1);
	if ((flags_hash = init_flags_hash()) == -1);
		return (-1);
	return (0);
}
