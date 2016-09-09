/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:08:25 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/09 13:39:04 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		hash(const char key)
{
	ft_putendl(ft_itoa((key % 45) / 1.2));
	return((key % 45) / 1.2);
}

void	init_hash(t_hash **tab)
{
	*tab = (t_hash *)ft_memalloc(sizeof(t_hash) * 36);
	(*tab)[hash('d')] = &integer;
//	tab[8] = test;
//	ft_putstr("\ntest fonction test : ");
//	tab[8](4);
//	ft_putendl("");
//	tab[12] = ;
//	tab[17] = ;
//	tab[22] = ;
//	tab[25] = ;
//	tab[35] = ;
//	tab[16] = ;
//	tab[20] = ;
//	tab[7] = ;
//	tab[30] = ;
}
