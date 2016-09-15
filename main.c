/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:09:04 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/15 19:01:09 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	test(char c)
{
	return((c % 65) / 1.2);
}

int	main()
{
	int		*ptr;
	int		i;

	i = 0;
	ptr = (int *)ft_memalloc(sizeof(int) * 5);
//	while (i < 1234567890)
//	{
		ft_printf("nb char : %d\n", ft_printf("random string : %c %s %p %x %X %d\n", 'a', "mdr", ptr, (unsigned int)ptr, (unsigned int)ptr, 1));
		printf("nb char : %d\n", printf("random string : %c %s %p %x %X %d\n", 'a', "mdr", ptr, (unsigned int)ptr, (unsigned int)ptr, 1));
		ft_printf("ptr : %p\n", ptr);
		printf("ptr : %p\n", ptr);
		ft_printf("ptr : %p\n", (void *)0);
		printf("ptr : %p\n", (void *)0);
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
		ft_printf("chars : %cc%c%c%c%c%c\n", 'c', 'o', 'u', 'c', 'o', 'u');
		printf("chars : %cc%c%c%c%c%c\n", 'c', 'o', 'u', 'c', 'o', 'u');
		ft_printf("s %d\nS %d\np %d\nd %d\nD %d\ni %d\no %d\nO %d\nu %d\nU %d\nx %d\nX %d\nc %d\nC %d\n", test('s'), test('S'), test('p'), test('d'), test('D'), test('i'), test('o'), test('O'), test('u'), test('U'), test('x'), test('X'), test('c'), test('C'));
//		i++;
//	}
	return (0);
}
