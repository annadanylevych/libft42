/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adanylev <adanylev@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:07:19 by adanylev          #+#    #+#             */
/*   Updated: 2023/09/13 15:16:56 by adanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_words(char *s int c)
{
	size_t	i;
	int	b;

	i = 0;
	b = 0;
	while (s[i])
	{
		if (s[i] != c && b == 0)
		{
			b = 1;



char **ft_split(char const *s, char c)
{

