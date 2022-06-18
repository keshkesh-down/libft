/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:43:40 by sgendel           #+#    #+#             */
/*   Updated: 2021/11/12 20:47:14 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_lstsize(t_list *lst)
{
	int	countStruct;

	countStruct = 0;
	while (lst)
	{
		countStruct++;
		lst = lst->next;
	}
	return (countStruct);
}
