/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:53:01 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/30 14:53:05 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list*first;

	if (!alst || !del)
		return ;
	first = *alst;
	while (*alst)
	{
		first = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = first;
	}
	*alst = NULL;
}
