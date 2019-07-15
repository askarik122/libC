/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:27:19 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/15 10:25:31 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_new(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s2[i + 1] == '\0')
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	char	*ptr;

	if (!ft_strlen(s2))
		return (char *)s1;
	i = 0;
	ptr = (char *)s1;
	while (s1[i])
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
