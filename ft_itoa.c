/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 20:11:30 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/28 20:39:08 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_dcnt(unsigned int nb)
{
	int len;

	len = 0;
	while (nb >= 10)
	{
		len++;
		nb /= 10;
	}
	return (len + 1);
}

char		*ft_itoa(int n)
{
	char			*nbr;
	size_t			len;
	unsigned int	nb;
	size_t			i;

	i = 0;
	nb = (n < 0) ? -n : n;
	len = ft_dcnt(nb);
	if (!(nbr = (char *)malloc(sizeof(char) * (len + 1 + (n < 0 ? 1 : 0)))))
		return (NULL);
	if (n < 0)
	{
		nbr[i] = '-';
		len++;
	}
	i = len - 1;
	while (nb >= 10)
	{
		nbr[i--] = (char)(nb % 10) + '0';
		nb /= 10;
	}
	nbr[i] = (char)nb % 10 + '0';
	nbr[len] = '\0';
	return (nbr);
}
