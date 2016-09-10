/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:09:04 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/10 22:18:02 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int		*ptr;

	ptr = (int *)ft_memalloc(sizeof(int) * 5);
	ft_printf("s %d\nS %d\np %d\nd %d\nD %d\ni %d\no %d\nO %d\nu %d\nU %d\nx %d\nX %d\nc %d\nC %d\n", hash('s'), hash('S'), hash('d'), hash('D'), hash('i'), hash('o'), hash('O'), hash('u'), hash('U'), hash('x'), hash('X'), hash('c'), hash('C'));
	ft_printf("ptr : %p\n", ptr);
	printf("ptr : %p\n", ptr);
	ft_printf("hexa de %d : %x\n", 5555, 5555);
	printf("hexa de %d : %x\n", 5555, 5555);
	ft_printf("HEXA de %d : %X\n", 5555, 5555);
	printf("HEXA de %d : %X\n", 5555, 5555);
	ft_printf("plein de decimal : %d %d %d %d\n", 5, 6, 7, 8);
	printf("plein de decimal : %d %d %d %d\n", 5, 6, 7, 8);
	ft_printf("plein de int : %i %i %i %i\n", 5, 6, 7, 8);
	printf("plein de int : %i %i %i %i\n", 5, 6, 7, 8);
	ft_printf("string : %s\n", "mdr ça marche");
	printf("string : %s\n", "mdr ça marche");
	ft_printf("chars : %c%c%c%c%c%c\n", 'c', 'o', 'u', 'c', 'o', 'u');
	printf("chars : %c%c%c%c%c%c\n", 'c', 'o', 'u', 'c', 'o', 'u');
	printf("chars : %cc%c%c%c%c%c\n", 'c', 'o', 'u', 'c', 'o', 'u');
	return (0);
}
