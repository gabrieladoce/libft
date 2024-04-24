/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:59:57 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/11 17:06:05 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rtn;
	size_t	count;

	count = nmemb * size;
	rtn = malloc(count);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, count);
	return (rtn);
}
