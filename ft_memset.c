/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:10:39 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/19 16:31:03 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void	*b, int	c, size_t	len)
{
	unsigned char	*q;

	q = b;
	while (len)
	{
		*q = (unsigned char) c;
		len--;
		q++;
	}
	return (b);
}
