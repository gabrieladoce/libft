/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:21:12 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/11 16:33:59 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!big || !little) && len == 0)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && i + j < len
			&& big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <stddef.h>
int main()
{
	const char *big = "000123454564546";
	const char *little = "12345";
	char *result = ft_strnstr(big, little, 5);

	if (result != NULL)
	{
		printf("'%s' encontrado em '%s' na posição %ld\n result %s",
		little, big, result - big, result);
	}
	else
	{
		printf("'%s' não encontrado em '%s'\n result: %s", little, big, result);
	}
	return 0;
}*/
