/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:03:19 by sgendel           #+#    #+#             */
/*   Updated: 2021/11/15 23:58:16 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	n = dstsize;
	d = dst;
	s = src;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			n--;
			*d++ = *s;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
