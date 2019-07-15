/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 17:21:50 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/30 14:46:48 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*fresh;
	size_t	i;
	size_t	j;

	if (s)
	{
		i = 0;
		j = ft_strlen(s);
		if (!(fresh = (char *)malloc(sizeof(char) * j + 1)))
			return (NULL);
		while (s[i])
		{
			fresh[i] = f(s[i]);
			i++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
