/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:26:23 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/11 19:10:24 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	new = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		new[j] = s2[i];
		j++;
		i++;
	}
	new[j] = 0;
	return (new);
}
/*
#include <stdio.h>
#include <stdlib.h> // Para usar a função free

int main() {
    const char *s1 = "Hello, ";
    const char *s2 = "world!";
    char *new;

    new = ft_strjoin(s1, s2);

    if (new != NULL) {
        printf("Strings: %s\n %s\n\n", s1, s2);
        printf("String nova: %s\n", new);
        printf("Endereço da string original 1: %p\n 2: %p\n\n", s1, s2);
        printf("Endereço da string nova: %p\n", new);
    } else {
        printf("Falha ao extrair a substring.\n");
    }

    return 0;
}*/
