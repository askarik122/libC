/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 22:25:06 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/19 21:14:57 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	*fresh;

	i = 0;
	len = 0;
	if (!s)
		return (NULL);
	if (*s == '\0')
		return (char *)s;
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	if (i == j + 1)
		return (ft_strnew(1));
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(fresh = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (i <= j)
		fresh[len++] = s[i++];
	fresh[len] = '\0';
	return (fresh);
}
