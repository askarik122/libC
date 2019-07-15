/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 05:30:03 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/19 20:24:13 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fdk(long n, int cd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', cd);
		ft_putnbr_fdk(-n, cd);
	}
	else if (n > 9)
	{
		ft_putnbr_fdk(n / 10, cd);
		ft_putnbr_fdk(n % 10, cd);
	}
	else
	{
		ft_putchar_fd(n + '0', cd);
	}
}

void		ft_putnbr_fd(int nb, int fd)
{
	long	a;

	a = nb;
	ft_putnbr_fdk(a, fd);
}
