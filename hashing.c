/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:08:25 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/11 17:30:18 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hash(const char key)
{
	return((key % 45) / 1.2);
}

int	init_hash(t_hash **tab)
{
	/*if (!(*tab = (t_hash *)ft_memalloc(sizeof(t_hash) * 36)))
		return (-1)*/
	*tab = (t_hash *)ft_memalloc(sizeof(t_hash) * 36);
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('i')] = &integer;
	(*tab)[hash('c')] = &character;
	(*tab)[hash('p')] = &hexa;
	(*tab)[hash('s')] = &string;
	(*tab)[hash('x')] = &hexa;
	(*tab)[hash('X')] = &hexa;
	/*(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;
	(*tab)[hash('d')] = &integer;*/
	return (0);
}
