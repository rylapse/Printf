/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwang-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 18:19:47 by bwang-do          #+#    #+#             */
/*   Updated: 2018/03/07 18:19:49 by bwang-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_print_d(va_list ap, t_flags *flags)
{
	int				i;
	long long int	n;
	char			*ret;

	if (flags->modifier[0] == flags->modifier[1] && flags->modifier[1] == 'l')
		n = va_arg(ap, long long int);
	else if (flags->modifier[0] == 'l')
		n = va_arg(ap, long int);
	else if (flags->modifier[0] == 'h')
		n = va_arg(ap, short int);
	ret = ft_itoa(n);
	i = 0;
	while (ret[i] && i < flags->options[4])
	{
		ret = ft_realloc_free(0, ret);
		i++;
	}
	return (ret);
}
