/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <gdoce-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:36:36 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/17 13:45:18 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		b[i] = c;
		i++;
	}
	return (s = b);
}
/*
#include <stdio.h>
int main()
{
    char str[50];
    ft_memset(str, 'a', 20); // Preenche os primeiros 10 bytes
			     // de str com o caractere 'A'
    printf("str após memset: %s\n", str);
    return 0;
}*/
