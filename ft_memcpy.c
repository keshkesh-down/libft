/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:56:23 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/19 17:57:33 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	unsigned char		*ddst;
	const unsigned char	*dsrc;

	ddst = dst;
	dsrc = src;
	if ((ddst == NULL) && (dsrc == NULL))
		return (NULL);
	while (n != 0)
	{
		*ddst = *dsrc;
		n--;
		ddst++;
		dsrc++;
	}
	return (dst);
}
