/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:00:58 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/26 17:44:39 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*err1(int	i)
{
	char	*sub;

	sub = (char *)malloc(sizeof(char) * 1);
	if (!sub)
		return (0);
	sub[i] = '\0';
	return (sub);
}

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	size_t	l;
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	l = ft_strlen(s + start);
	if (start > (ft_strlen(s)))
	{
		sub = err1(i);
		return (sub);
	}
	if (l > len)
		l = len;
	sub = (char *)malloc(sizeof(char) * (l + 1));
	if (!sub)
		return (0);
	while (i < l)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
