/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:09:04 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/08 17:06:23 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		hash(av[1]);
		hash("d");
		hash("i");
		hash("o");
		hash("u");
		hash("x");
		hash("X");
		hash("n");
		hash("s");
		hash("c");
		hash("%");
		ft_putstr("ft_printf : ");
		ft_printf("%d%d%d\n", 4, 4, 4);
		printf("printf : %d%d%d\n", 4, 4, 4);
	}
	return (0);
}
