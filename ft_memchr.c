/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:49:32 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/21 21:15:49 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	const unsigned char	*ss;
	unsigned char		d;
	size_t				i;

	i = 0;
	ss = s;
	d = c;
	while (i < n && *ss != d)
	{
		i++;
		ss++;
	}
	if (i < n && *ss == d)
		return ((unsigned char *)ss);
	return (NULL);
}
