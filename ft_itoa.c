/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgendel <sgendel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:08:05 by sgendel           #+#    #+#             */
/*   Updated: 2021/10/27 16:06:50 by sgendel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	powermal(int nb)
{
	int	j;

	j = 1;
	while (nb / 10)
	{
		nb /= 10;
		j++;
	}
	return (j);
}

int	negative(char	*nbr, int	n, int	j)
{
	nbr[0] = '-';
	if (n == -2147483648)
	{
		nbr[j] = '8';
		n /= 10;
	}
	n = n *(-1);
	return (n);
}

char	*ft_itoa(int	n)
{
	char	*nbr;
	int		i;
	int		j;

	j = powermal(n);
	if (n < 0)
		j++;
	i = j;
	nbr = (char *)malloc(sizeof(char) * (j + 1));
	if (!nbr)
		return (0);
	if (n == 0)
		nbr[0] = '0';
	if (n == -2147483648)
		j--;
	if (n < 0)
		n = negative(nbr, n, j);
	while (n > 0)
	{
		nbr[j - 1] = (n % 10) + 48;
		n = n / 10;
		j--;
	}
	nbr[i] = '\0';
	return (nbr);
}
