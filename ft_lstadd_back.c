/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:58:06 by sgendel           #+#    #+#             */
/*   Updated: 2021/11/11 21:11:11 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*lastStruct;

	if (*lst)
	{
		lastStruct = ft_lstlast(*lst);
		lastStruct->next = new;
	}
	else
		*lst = new;
}
