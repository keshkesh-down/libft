/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:27:41 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/21 19:07:17 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int	c)
{
	if ((c >= 65) && (c <= 90))
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
