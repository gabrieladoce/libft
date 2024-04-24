/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:19:23 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/10 17:36:38 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	if (dest == src || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	while (n--)
		dest_ptr[n] = src_ptr[n];
	return (dest);
}
