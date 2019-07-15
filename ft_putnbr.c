/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 05:12:44 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/19 20:19:20 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbrk(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbrk(-n);
	}
	else if (n > 9)
	{
		ft_putnbrk(n / 10);
		ft_putnbrk(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void		ft_putnbr(int nb)
{
	long	a;

	a = nb;
	ft_putnbrk(a);
}
