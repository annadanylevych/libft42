/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:55:08 by adanylev          #+#    #+#             */
/*   Updated: 2023/09/17 18:47:43 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	a;

	a = 0;
	i = 0;
	if (needle[a] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		//printf("Encuentro un start en %zu\n", i);
		while (haystack[i + a] == needle[a] && i + a < len)
		{
			a++;
			//printf("a = %zu\n", a);
			//printf("i = %zu\n", i);
			//printf("En pocion haystack[%zu] = |%c|, en posicion needle[%zu] = |%c|\n", i + a, haystack[i + a], a, needle[a]);
			if (needle[a] == '\0')
			{
			//	printf("CASO 1: needle[a] == '\\0'\n, devuelvo haystack en psocion [i - a], posicion (%zu)\n", i - a);
				return ((char *)&haystack[i]);
			}
			else if (haystack[i + a] == '\0')
				return (0);
			else if (haystack[i + a] != needle[a]){
			//	printf("CASO 3: haystack[i] != needle[a], resetamos a = 0\n");
				a = 0;
				break;
			}
		}
		//printf("El siguiente caracter a mirar es posicion %zu\n", i);
		i++;
	}
	//printf("fuera del while salimos con nuill\n");
	return (0);
}
/*
int	main(void)
{
	const char	*haystack = "aaabcabcd";
	const char	*needle = "aabc";

	printf("%s", ft_strnstr(haystack, needle, -1 ));
}*/
