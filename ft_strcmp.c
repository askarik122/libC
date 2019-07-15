/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:13:40 by bglinda           #+#    #+#             */
/*   Updated: 2019/04/30 14:45:39 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (a[i] == b[i])
	{
		if (b[i] == '\0' && a[i] == '\0')
			return (0);
		i++;
	}
	if (a[i] - b[i] > 0)
		return (int)(a[i] - b[i]);
	if (b[i] - a[i] > 0)
		return (int)(-1 * (b[i] - a[i]));
	return (0);
}
