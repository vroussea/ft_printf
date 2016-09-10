/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:09:04 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/10 17:48:54 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	int		*ptr;

	ptr = (int *)ft_memalloc(sizeof(int) * 5);
	ft_printf("ptr : %p\n", ptr);
	printf("ptr : %p\n", ptr);
	ft_printf("plein de int : %d %d %d %d\n", 5, 6, 7, 8);
	printf("plein de int : %d %d %d %d\n", 5, 6, 7, 8);
	ft_printf("string : %s\n", "mdr ça marche");
	printf("string : %s\n", "mdr ça marche");
	ft_printf("chars : %c%c%c%c%c%c\n", 'c', 'o', 'u', 'c', 'o', 'u');
	printf("chars : %c%c%c%c%c%c\n", 'c', 'o', 'u', 'c', 'o', 'u');
	return (0);
}
