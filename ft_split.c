/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoce-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:51:14 by gdoce-si          #+#    #+#             */
/*   Updated: 2024/04/15 15:20:37 by gdoce-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_limit(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_count_words(char const *s, char delim)
{
	size_t	i;
	size_t	len;
	int		n;

	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == delim)
			i++;
		len = ft_strlen_limit(s + i, delim);
		i += len;
		if (len > 0)
			n++;
	}
	return (n);
}

static void	*ft_free(char **words)
{
	int	i;

	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		k;
	int		num;
	char	**words;

	if (!s)
		return (NULL);
	i = 0;
	k = -1;
	num = ft_count_words(s, c);
	words = (char **)malloc((num + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (++k < num)
	{
		while (s[i] == c)
			i++;
		words[k] = ft_substr(s, i, ft_strlen_limit(s + i, c));
		if (!words[k])
			return (ft_free(words));
		i += ft_strlen_limit(s + i, c);
	}
	words[num] = NULL;
	return (words);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{	
	(void)argc;
	char **words;
	
	words = ft_split(argv[1], argv[2][0]);

	int i = 0;
	for(; words[i]; i++)
		printf("words[%d] = \'%s\'\n", i, words[i]);
	printf("words[%d] = NULL\n", i);

	ft_free(words);
}*/
