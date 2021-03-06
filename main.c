/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwang-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 17:34:33 by bwang-do          #+#    #+#             */
/*   Updated: 2018/03/19 18:21:50 by bwang-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	char			*str = "World";
	int				len;
	int				n = 19;
	unsigned int	u = (unsigned int)3000000000U;
	unsigned long long	lu = (unsigned long long)18446744073709551614U;

	len = ft_printf("Hello %7s %c\n", str, '!');
	ft_printf("len = %-5.3d\n", len);
	ft_printf("%#o\n", n);
	ft_printf("%#x\n", n);
	ft_printf("%p\n", &n);
	ft_printf("%u\n", u);
	ft_printf("%llu\n", lu);
	return (0);
}
