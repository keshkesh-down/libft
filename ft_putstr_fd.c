/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:34:05 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/27 17:10:31 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putstr_fd(char	*s, int	fd)
{
	size_t	i;

	if (s)
	{
		i = 0;
		while (i < (ft_strlen(s)))
		{
			ft_putchar_fd (s[i], fd);
			i++;
		}
	}
}
