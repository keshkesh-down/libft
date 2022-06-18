/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:10:03 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/27 17:11:53 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putendl_fd(char	*s, int	fd)
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
	write(fd, "\n", 1);
}
