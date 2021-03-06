/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 21:01:05 by sgendel           #+#    #+#             */
/*   Updated: 2021/11/12 20:49:35 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int	c)
{
	if ((((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		|| ((c >= '0') && (c <= '9')))
		return (1);
	return (0);
}
