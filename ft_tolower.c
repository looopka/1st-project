/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:00:18 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 17:14:45 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if ((unsigned char)c >= 'A' && (unsigned char)c <= 'Z')
		return (c);
	return (0);
}

int			ft_tolower(int c)
{
	if (ft_isupper(c) > 0)
		return (c + 32);
	return (c);
}
