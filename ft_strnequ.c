/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:09:19 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/30 14:50:28 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	counter;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	i = 0;
	counter = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while ((s1[i] == s2[i]) && i < n)
	{
		if (s1[i] == s2[i])
			counter++;
		if (i >= len1 || i >= len2)
			return (1);
		i++;
	}
	if (counter == n)
		return (1);
	return (0);
}
