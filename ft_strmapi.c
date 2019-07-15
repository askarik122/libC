/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:04:14 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/30 14:47:28 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*fresh;

	if (s)
	{
		i = 0;
		j = ft_strlen(s);
		if (!(fresh = (char *)malloc(j * sizeof(char) + 1)))
			return (NULL);
		while (*s)
		{
			fresh[i] = f(i, *s);
			i++;
			s++;
		}
		fresh[i] = '\0';
		return (fresh);
	}
	return (NULL);
}
