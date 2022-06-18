/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:57:28 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/27 18:09:43 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*sub;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if (!s1 || !set)
		return (0);
	len1 = 0;
	i = 0;
	len2 = ft_strlen(s1);
	while ((s1[len1]) && (ft_strchr(set, s1[len1])))
		len1++;
	while ((len2 > len1) && (ft_strchr(set, s1[len2 - 1])))
		len2--;
	sub = (char *)malloc(sizeof(char) * (len2 - len1 + 1));
	if (!sub)
		return (0);
	while (((int)len2 - (int)len1) > 0)
	{
		sub[i] = s1[len1];
		i++;
		len1++;
	}
	sub[i] = '\0';
	return (sub);
}
