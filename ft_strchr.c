/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:33:14 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/25 19:11:47 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strchr(const char	*s, int	c)
{
	const char	*src;
	int			len;

	src = s;
	len = ft_strlen(src);
	while (len != -1)
	{
		if (*src == (char)c)
			return ((char *) src);
		len--;
		src++;
	}
	return (NULL);
}
