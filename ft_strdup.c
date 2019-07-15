/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 11:06:33 by ihestia           #+#    #+#             */
/*   Updated: 2019/05/13 16:27:14 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	unsigned char	*str;
	size_t			size_src;
	size_t			i;

	i = 0;
	size_src = ft_strlen(src);
	if (!(str = (unsigned char *)malloc(sizeof(*str) * (size_src + 1))))
		return (NULL);
	while (i < size_src)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}
