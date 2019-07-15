/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 04:41:52 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/15 11:26:43 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_new(const char *s1, const char *s2)
{
	size_t		i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s2[i + 1] == '\0')
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	char	*ptr;

	if (!ft_strlen(s2))
		return (char *)s1;
	i = 0;
	while (s1[i] && i + ft_strlen(s2) <= len)
	{
		if (ft_new(&s1[i], s2) == 0)
		{
			ptr = (char *)&s1[i];
			return ((char *)ptr);
		}
		i++;
	}
	return (0);
}
