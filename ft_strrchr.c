/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:02:57 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/25 19:13:16 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char	*s, int	c)
{
	const char	*src;
	int			len;
	int			n;

	src = s;
	len = ft_strlen(src);
	n = len;
	while (len != 0)
	{
		src++;
		len--;
	}
	while (n != -1)
	{
		if (*src == (char)c)
			return ((char *) src);
		n--;
		src--;
	}
	return (NULL);
}
