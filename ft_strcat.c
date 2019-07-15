/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 02:07:32 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/15 13:50:50 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strcat(char const *s1, char const *s2)
{
	size_t			i;
	size_t			len;
	size_t			all;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	len = ft_strlen(s1);
	all = len + ft_strlen(s2);
	while (len < all)
	{
		a[len] = b[i];
		len++;
		i++;
	}
	a[len] = '\0';
	return ((char *)a);
}
