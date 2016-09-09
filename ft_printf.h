/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:09:27 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/09 13:40:26 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "libft/libft.h"

typedef void	(*t_hash)(int);

int		ft_printf(const char *restrict format, ...);
int		hash(const char key);
void	init_hash(t_hash **tab);
void	integer(int c);

#endif
