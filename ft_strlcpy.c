/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 20:43:58 by adanylev          #+#    #+#             */
/*   Updated: 2023/09/10 20:15:41 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	i = 0;

	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char *str="BBBB";
	char buff1[0xF00];
	char buff2[0xF00];

	printf("El sizeof de buff1 es = %lu\n", sizeof(buff1));
	strlcpy(buff1, str, sizeof(buff1));
	ft_strlcpy(buff2, str, sizeof(buff2));
	printf("(original) buff1 es |%s|\n", buff1);
	printf("(ft) buff2 es |%s|\n", buff2);
}*/
