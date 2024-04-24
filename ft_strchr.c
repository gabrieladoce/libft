/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:42:16 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/17 16:12:02 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str;
	size_t		i;
	size_t		n;

	n = ft_strlen(s) + 1;
	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char s[] = "tripouille";
   char *ret;

   ret = strchr(s, ('t' + 256));

   printf("String after |%s| is - |%s|\n", s, ret);
   
   ret = ft_strchr(s, ('t' + 256));

   printf("String after ft |%s| is - |%s|\n", s, ret);
   
   return(0);
}*/
