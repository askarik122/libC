/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 22:18:10 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/19 15:41:36 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	size_t	i;
	char	s;
	char	*a;

	i = 0;
	s = c;
	a = (void *)destination;
	while (i < n)
	{
		a[i] = s;
		i++;
	}
	return (a);
}
