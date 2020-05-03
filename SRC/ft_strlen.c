/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 21:08:04 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/03 14:55:36 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		size;
	char		*str;

	size = 0;
	str = (char *)s;
	while (*str)
	{
		size = size + 1;
		str = str + 1;
	}
	return (size);
}
