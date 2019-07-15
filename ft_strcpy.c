/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 00:26:04 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/15 17:34:37 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	char	*a;

	i = 0;
	a = dst;
	while (src[i] != '\0')
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (a);
}
