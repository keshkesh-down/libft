/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:59:34 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/19 19:25:47 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ddst;
	const unsigned char	*dsrc;

	ddst = dst;
	dsrc = src;
	if ((ddst == NULL) && (dsrc == NULL))
		return (NULL);
	if (ddst < dsrc)
	{
		while (len--)
		{
			*ddst = *dsrc;
			ddst++;
			dsrc++;
		}
	}
	else
	{
		ddst = ddst + len;
		dsrc = dsrc + len;
		while (len--)
			*--ddst = *--dsrc;
	}
	return (dst);
}
