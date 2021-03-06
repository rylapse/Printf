/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwang-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:20:35 by bwang-do          #+#    #+#             */
/*   Updated: 2017/11/15 11:55:47 by bwang-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		if (*s1 == *s2)
		{
			if (*s1 == '\0')
				return (1);
			else
				return (ft_strequ(s1 + 1, s2 + 1));
		}
	}
	return (0);
}
