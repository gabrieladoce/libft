/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:48:54 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/11 18:20:35 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_new;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	s_new = malloc((len + 1) * sizeof(char));
	if (!s_new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s_new[i] = s[start + i];
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
/*
#include <stdio.h>
#include <stdlib.h> // Para usar a função free

int main() {
    const char *s = "01234";
    unsigned int start;
    size_t len = 10;
    char *substring;

    // Chamando a função ft_substr para extrair a substring
    substring = ft_substr(s, start, len);

    if (substring != NULL) {
        printf("String original: %s\n", s);
        printf("Substring extraída: %s\n", substring);
        printf("Endereço da string original: %p\n", s);
        printf("Endereço da substring: %p\n", substring);

        // Liberando a memória alocada pela função ft_substr
        free(substring);
    } else {
        printf("Falha ao extrair a substring.\n");
    }

    return 0;
}*/
