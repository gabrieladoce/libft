/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:34:16 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/10 20:36:55 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i])
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			ptr = (char *)(s + i);
		i++;
	}
	if (((unsigned char *)s)[i] == (unsigned char)c)
		ptr = (char *)(s + i);
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char s[] = "tripouille";
   char *ret;

   ret = strrchr(s, ('t' + 256));

   printf("String after |%s| is - |%s|\n", s, ret);
   
   ret = ft_strrchr(s, ('t' + 256));

   printf("String after ft |%s| is - |%s|\n", s, ret);
   
   return(0);
}*/
