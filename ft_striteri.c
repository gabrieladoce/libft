/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:35:26 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/17 13:45:58 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
/*
void change (unsigned int i, char *c)
{
	*c = *c + i;
}
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	
	printf("Sending \'%s\'\n", argv[1]);
	ft_striteri(argv[1], &change);
	printf("Returning \'%s\'\n", argv[1]);	
}*/
