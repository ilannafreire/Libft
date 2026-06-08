/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <ifreire@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 19:37:35 by ifreire           #+#    #+#             */
/*   Updated: 2026/06/08 07:20:56 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t				s_src;
	size_t				s_dst;
	size_t				index;

	s_src = ft_strlen(src);
	s_dst = 0;
	while (s_dst < size && dst[s_dst])
		s_dst++;
	index = 0;
	if (s_dst == size)
		return (size + s_src);
	while (src[index] && (s_dst + index) < size - 1)
	{
		dst[index + s_dst] = src[index];
		index++;
	}
	dst[index + s_dst] = 0;
	return (s_dst + s_src);
}
