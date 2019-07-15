/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 12:47:40 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/30 14:48:39 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*a;
	size_t	i;

	i = 0;
	if (!(a = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
	{
		a[i] = '\0';
		i++;
	}
	a[i] = '\0';
	return (a);
}
