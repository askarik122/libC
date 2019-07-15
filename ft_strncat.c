/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:14:10 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/15 13:44:55 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char const *s1, char const *s2, size_t a)
{
	size_t			j;
	size_t			length;
	unsigned char	*c;
	unsigned char	*d;

	j = 0;
	c = (unsigned char *)s1;
	d = (unsigned char *)s2;
	length = ft_strlen(s1);
	while (j < a && d[j] != '\0')
	{
		*(c + length) = *(d + j);
		length++;
		j++;
	}
	c[length] = '\0';
	return ((char *)c);
}
