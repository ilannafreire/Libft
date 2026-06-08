/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsadd_back.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifreire <ifreire@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 08:03:01 by ifreire           #+#    #+#             */
/*   Updated: 2026/06/08 08:38:23 by ifreire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lsadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!lst || !new)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
}
}
