/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:09:27 by vroussea          #+#    #+#             */
/*   Updated: 2016/09/11 17:21:06 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef char	*(*t_hash)(va_list, char);

int		ft_printf(const char *restrict format, ...);
int		hash(const char key);
int		init_hash(t_hash **tab);
char	*integer(va_list varl, char key);
char	*character(va_list varl, char key);
char	*string(va_list varl, char key);
char	*hexa(va_list varl, char key);

#endif
