/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:52:19 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/17 15:52:46 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, STDOUT_FILENO);
}
/*
int main()
{
	char c = 'A';
	int fd = 1;//STDOUT_FILENO;

	ft_putchar_fd(c, fd);

	return 0;
}*/
