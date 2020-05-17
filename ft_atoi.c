/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 20:02:33 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 16:11:29 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((unsigned char)c == ' ' || (unsigned char)c == '\f' ||
		(unsigned char)c == '\n' || (unsigned char)c == '\r' ||
		(unsigned char)c == '\t' || (unsigned char)c == '\v')
		return (c);
	return (0);
}

int			ft_atoi(const char *str)
{
	size_t	i;
	int		res;
	int		sign;

	sign = 1;
	i = 0;
	res = 0;
	while (ft_isspace(str[i]) != 0)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]) != 0)
	{
		res = res * 10 + ((int)str[i] - '0');
		i++;
	}
	return (res * sign);
}
