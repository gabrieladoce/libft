/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:10:00 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/11 17:47:10 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_new;
	size_t	len;

	len = ft_strlen(s) + 1;
	s_new = malloc(sizeof(char) * len);
	if (!s_new)
		return (0);
	s_new = ft_memcpy(s_new, s, len);
	return (s_new);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() {
	const char *original = "Hello, world!";
	char *duplicate;
	duplicate = ft_strdup(original);

	if (duplicate != NULL) {
        printf("String original: %s\n", original);
        printf("String duplicada: %s\n", duplicate);
        printf("Endereço da string original: %p\n", original);
        printf("Endereço da string duplicada: %p\n", duplicate);

        free(duplicate);
    } else {
        printf("Falha ao duplicar a string.\n");
    }
    return 0;
}*/
