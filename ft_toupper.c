/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:51:06 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 16:28:45 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (c);
	return (0);
}

int			ft_toupper(int c)
{
	if (ft_islower(c) != 0)
		return (c - 32);
	return (c);
}
