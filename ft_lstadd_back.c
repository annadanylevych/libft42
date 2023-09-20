/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:22:20 by adanylev          #+#    #+#             */
/*   Updated: 2023/09/20 14:30:29 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	a = *lst;
	if (a && new)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = new;
	}
	else
	{
		*lst = new;
	}
}
