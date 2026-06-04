/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 18:09:11 by ifreire           #+#    #+#             */
/*   Updated: 2026/06/03 23:36:21 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	if (ft_isalpha('A'))
		write(1, "A = alpha\n", 10);
	else
		write(1, "A = not alpha\n", 14);
	if (ft_isalpha('4'))
		write(1, "4 = alpha\n", 10);
	else
		write(1, "4 = not alpha\n", 14);
	if (ft_isalpha('2'))
		write(1, "2 = alpha\n", 10);
	else
		write(1, "2 = not alpha\n", 14);
	return (0);
}
*/