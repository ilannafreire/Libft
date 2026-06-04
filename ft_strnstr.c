/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 19:22:35 by ifreire           #+#    #+#             */
/*   Updated: 2026/05/28 22:37:37 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *substr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*substr == '\0')
		return ((char *)src);
	while (src[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && src[i + j] == substr[j])
			j++;
		if (substr[j] == '\0')
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}
