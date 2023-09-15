/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 19:30:43 by adanylev          #+#    #+#             */
/*   Updated: 2023/09/11 18:20:21 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t	i;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;

	if (psrc < pdst)
	{
		while (*psrc)
		{
			pdst[len - 1] = psrc[len - 1];
			len--;
			if (len == 0)
				break;
		}
	}
	else if (psrc > pdst)
	{
		while(i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	return (dst);
}
