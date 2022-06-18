/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:40:21 by sgendel           #+#    #+#             */
/*   Updated: 2021/11/12 21:16:47 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list	*lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstNew;
	t_list	*cmpNew;
	t_list	*cmpOld;

	if ((!lst) || (!f))
		return (NULL);
	lstNew = ft_lstnew((*f)(lst -> content));
	cmpNew = lstNew;
	cmpOld = lst->next;
	while (cmpOld)
	{
		cmpNew->next = ft_lstnew((*f)(cmpOld->content));
		if (!(cmpNew->next))
		{
			ft_lstclear(&lstNew, del);
			return (NULL);
		}
		cmpNew = cmpNew->next;
		cmpOld = cmpOld->next;
	}
	return (lstNew);
}
