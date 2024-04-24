/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:34:33 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/10 17:49:12 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if ((size_t)dest - (size_t)src < n)
	{
		i = n;
		while (--i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = -1;
		while (++i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char buffer[20];

    // Move a string para buffer
  
    ft_memmove(buffer, str, 10);    
    printf("String original: %p\n", str);   
    printf("String movida: %p\n", buffer);
    printf("String original: %s\n", str);   
    printf("String movida: %s\n", buffer);    
    
    memmove(buffer, str, 10);
    printf("String original: %p\n", str);   
    printf("String movida: %p\n", buffer);
    printf("String original: %s\n", str);   
    printf("String movida: %s\n", buffer);

    return 0;
}*/
