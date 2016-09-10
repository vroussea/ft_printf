/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:08:25 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/10 19:05:57 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		hash(const char key)
{
	return((key % 45) / 1.2);
}

void	init_hash(t_hash **tab)
{
	*tab = (t_hash *)ft_memalloc(sizeof(t_hash) * 36);
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('c')] = &character;
	(*tab)[hash('p')] = &pointer;
	(*tab)[hash('s')] = &string;
	/*(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;*/
}
