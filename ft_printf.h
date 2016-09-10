/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:09:27 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/10 21:38:34 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef void	(*t_hash)(va_list, char);

int		ft_printf(const char *restrict format, ...);
int		hash(const char key);
void	init_hash(t_hash **tab);
void	integer(va_list varl, char key);
void	character(va_list varl, char key);
void	string(va_list varl, char key);
void	hexa(va_list varl, char key);

#endif
