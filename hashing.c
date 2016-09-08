/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:08:25 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/08 18:40:48 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		hash(const char *key)
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

void	**init_hash()
{
	void	**ptr;
	void	*(*tab)(int);
	void	(*test)(int);

	ptr = (void **)ft_memalloc(sizeof(void *) * 36);
	tab = (void *(*)(int))ft_memalloc(sizeof(void *) * 36);
	test = &integer;
	tab[8] = test;
	ft_putstr("\ntest fonction test : ");
	tab[8](4);
	ft_putendl("");
//	tab[12] = ;
//	tab[17] = ;
//	tab[22] = ;
//	tab[25] = ;
//	tab[35] = ;
//	tab[16] = ;
//	tab[20] = ;
//	tab[7] = ;
//	tab[30] = ;
	return (ptr);
}
