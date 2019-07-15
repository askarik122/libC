/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:20:55 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/15 16:25:38 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		*(a + i) = *(b + i);
		if (*(b + i) == (unsigned char)c)
			return (a + i + 1);
		i++;
	}
	return (NULL);
}
