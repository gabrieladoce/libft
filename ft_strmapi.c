/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:47:32 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/15 22:08:33 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/*
char change (unsigned int i, char c)
{
	return (c + i);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	char *res;
	
	printf("Sending \'%s\'\n", argv[1]);
	res = ft_strmapi(argv[1], &change);
	printf("Returning \'%s\'\n", res);	
}*/
