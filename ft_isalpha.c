/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:53:49 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 16:12:01 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return (c);
	return (0);
}

static int	ft_isupper(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (c);
	return (0);
}

int			ft_isalpha(int c)
{
	if (ft_islower(c) != 0 || ft_isupper(c) != 0)
		return (c);
	return (0);
}
