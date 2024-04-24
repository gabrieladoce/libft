/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:10:39 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/15 14:48:03 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	str = malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
/*
#include <stdio.h>
int main() {
    const char *s1 = "Hello, world";
    const char *set = "el";
    char *trimmed;
    trimmed = ft_strtrim(s1, set);

    if (trimmed != NULL) {
        printf("String original: '%s'\n", s1);
        printf("Conjunto de caracteres a ser removido: '%s'\n", set);
        printf("String após remoção dos caracteres: '%s'\n", trimmed);

        free(trimmed);
    } else {
        printf("Falha ao remover os caracteres.\n");
    }

    return 0;
}*/
