/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <ifreire@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 07:36:39 by ifreire           #+#    #+#             */
/*   Updated: 2026/06/08 07:36:43 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		index;

	if (!s || !f)
		return (0);
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (0);
	index = 0;
	while (s[index])
	{
		ptr[index] = f(index, s[index]);
		index++;
	}
	ptr[index] = 0;
	return (ptr);
}
