/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:08:25 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/15 17:51:57 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	fill_table(t_hash **tab)
{
	int	i;

	i = 0;
	while (i < 256)
	{
		(*tab)[i] = &void_funct;
		i++;
	}
}

int			init_hash(t_hash **tab)
{
	if (!(*tab = (t_hash *)ft_memalloc(sizeof(t_hash) * 256)))
		return (-1);
	fill_table(tab);
	(*tab)['d'] = &integer;
	(*tab)['i'] = &integer;
	(*tab)['c'] = &character;
	(*tab)['p'] = &hexa;
	(*tab)['s'] = &string;
	(*tab)['x'] = &hexa;
	(*tab)['X'] = &hexa;
	/*(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;*/
	return (0);
}
