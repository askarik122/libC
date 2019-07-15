/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 04:11:48 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/15 10:12:32 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *str, int c)
{
	char			*ptr;
	unsigned char	d;

	d = c;
	ptr = (char *)str;
	if (ft_strchr(str, c) == NULL)
		return (NULL);
	while (*ptr)
		ptr++;
	while (*ptr != d)
		ptr--;
	return (ptr);
}
