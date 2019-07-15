/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:06:46 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/30 17:39:19 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t				space(const char *str)
{
	size_t					i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	return (i);
}

int							ft_atoi(const char *str)
{
	size_t					i;
	unsigned long long int	result;
	int						sign;

	i = 0;
	result = 0;
	sign = 1;
	i = space(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		if (result > 922337203685477580 && sign == -1 && str[i] > 8)
			return (0);
		else if (result > 922337203685477580 && sign == 1 && str[i] > 7)
			return (-1);
		i++;
	}
	return ((int)(result * sign));
}
