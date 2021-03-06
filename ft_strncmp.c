/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:48:05 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/21 21:36:36 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((n != 0) && ((*s1 != '\0') || (*s2 != '\0')))
	{
		if (*s1 != *s2)
			return (((unsigned char) *s1) - ((unsigned char) *s2));
		s1++;
		s2++;
		n--;
	}
	return (0);
}
