/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:18:29 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/21 21:32:10 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = s1;
	ss2 = s2;
	while (i < n && *ss1 == *ss2)
	{
		i++;
		ss1++;
		ss2++;
	}
	if (i == n)
		return (0);
	return (((unsigned char) *ss1) - ((unsigned char) *ss2));
}
