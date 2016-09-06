/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:16:35 by vroussea          #+#    #+#             */
/*   Updated: 2015/12/03 20:03:51 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char	*tmp1;
	int		cpt;

	tmp1 = s1;
	cpt = 0;
	while (*tmp1 != '\0')
		tmp1++;
	while (s2[cpt])
	{
		*tmp1 = s2[cpt];
		tmp1++;
		cpt++;
	}
	*tmp1 = '\0';
	return (s1);
}