/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:56:13 by sgendel           #+#    #+#             */
/*   Updated: 2021/11/12 20:47:03 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void	*content)
{
	t_list	*newStruct;

	newStruct = (t_list *)malloc(sizeof(*newStruct));
	if (!newStruct)
		return (0);
	newStruct->content = content;
	newStruct->next = NULL;
	return (newStruct);
}
