/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <ifreire@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:33:22 by ifreire           #+#    #+#             */
/*   Updated: 2026/06/08 07:34:31 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ptr;
	size_t		index;

	index = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	while (index < len)
	{
		ptr[index] = s [start + index];
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}
