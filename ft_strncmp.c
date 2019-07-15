/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 00:46:44 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/19 15:43:56 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			r;
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	r = 0;
	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((a[i] == b[i]) && i < n)
	{
		if (a[i] == '\0' || b[i] == '\0')
			return (a[i] - b[i]);
		if (i == n - 1)
			return (0);
		i++;
	}
	if (a[i] - b[i] > 0)
		return (int)(a[i] - b[i]);
	if (b[i] - a[i] > 0)
		return (int)(-1 * (b[i] - a[i]));
	else
		return (0);
}
