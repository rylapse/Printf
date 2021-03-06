/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwang-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 17:44:59 by bwang-do          #+#    #+#             */
/*   Updated: 2018/06/09 18:10:15 by bwang-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_print_p(char *ret, va_list ap, t_flags *flags)
{
	void	*p;

	flags->options[0] = 0;
	p = va_arg(ap, void*);
	ret = new_itoa((int)p);
	return (ft_width(ret, ft_strlen(ret), flags));
}
