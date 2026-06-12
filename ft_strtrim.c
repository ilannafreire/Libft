/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <ifreire@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 07:35:52 by ifreire           #+#    #+#             */
/*   Updated: 2026/06/09 19:15:57 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s1_len;
	size_t	start;
	size_t	index;

	s1_len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;
	while (s1_len > start && ft_isset(s1[s1_len - 1], set))
		s1_len--;
	s1_len = s1_len - start;
	str = malloc((s1_len + 1) * sizeof(char));
	if (!str)
		return (0);
	index = 0;
	while (s1_len > index)
	{
		str[index] = s1[start + index];
		index++;
	}
	str[index] = 0;
	return (str);
}
