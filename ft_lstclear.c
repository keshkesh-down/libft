/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:23:29 by sgendel           #+#    #+#             */
/*   Updated: 2021/11/11 21:35:20 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstclear(t_list	**lst, void	(*del)(void*))
{
	t_list	*structTmp;

	if (!lst)
		return ;
	while (*lst)
	{
		structTmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = structTmp;
	}
}
