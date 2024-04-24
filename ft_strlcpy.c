/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:49:33 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/10 18:38:53 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size == 0)
	{
		return (src_len);
	}
	while ((i < (size - 1)) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char dest[10];
//	char dest2[20];
	const char *c = "Hello world!";
	
	printf("dest  %s\n", dest);
	printf("ft_  %ld\n", ft_strlcpy(dest, c, 3));
//	printf("original  %d\n", strlcpy(dest2, c, 10));
	printf("dest  %s\n", dest);
//	printf("dest2  %s\n", dest2);
}*/
