/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:01:51 by sgendel           #+#    #+#             */
/*   Updated: 2021/11/12 20:51:50 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int	c)
{
	if ((c > 31) && (c < 127))
		return (1);
	return (0);
}
