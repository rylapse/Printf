/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ld.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwang-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 15:35:59 by bwang-do          #+#    #+#             */
/*   Updated: 2018/03/09 15:34:29 by bwang-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_print_ld(va_list ap, t_flags *flags)
{
	flags->modifier[0] = 'l';
	return (ft_print_d(ap, flags));
}