/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:40:15 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/11 17:09:20 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	r;
	int	i;
	int	s;

	r = 0;
	i = 0;
	s = 1;
	while (nptr[i] == ' ' || nptr[i] == '\f'
		|| nptr[i] == '\n' || nptr[i] == '\r'
		|| nptr[i] == '\t' || nptr[i] == '\v')
		++i;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s *= -1;
		++i;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = r * 10 + (nptr[i] - '0');
		++i;
	}
	return (s * r);
}
/*
#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char *argv[])
{
        printf("ft_atoi: %d\n", ft_atoi("\007 8"));
        printf("lib atoi: %d\n", atoi("\007 8"));
        
}*/
