/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <ifreire@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:09:05 by ifreire           #+#    #+#             */
/*   Updated: 2026/06/08 08:10:26 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_split(char **matriz, int i)
{
	while (i >= 0)
	{
		free(matriz[i]);
		i--;
	}
	free(matriz);
	return (NULL);
}

static int	ft_wordlen(const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**ft_pop_matriz(char const *s, char c, char **matriz)
{
	int	i;
	int	index;
	int	len;

	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			len = ft_wordlen(&s[i], c);
			matriz[index] = malloc(len + 1);
			if (!matriz[index])
				return (ft_free_split(matriz, index - 1));
			ft_strlcpy(matriz[index], &s[i], len + 1);
			i += len;
			index++;
		}
	}
	matriz[index] = NULL;
	return (matriz);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	int		count_word;

	if (!s)
		return (NULL);
	count_word = ft_count_words(s, c);
	matriz = malloc((count_word + 1) * sizeof(char *));
	if (!matriz)
		return (NULL);
	return (ft_pop_matriz(s, c, matriz));
}
