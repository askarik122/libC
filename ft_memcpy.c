/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:41:11 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/15 03:32:00 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (void *)dest;
	b = (void *)src;
	i = 0;
	if (!(a || b))
		return (NULL);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
