/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 18:19:44 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/27 16:46:09 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*dst_buf;
	const char	*src_buf;
	size_t		n;

	dst_buf = dst;
	src_buf = src;
	n = size;
	if (dst == NULL || src == NULL)
		return (0);
	if (n != 0)
	{
		while (--n != 0)
		{
			if ((*dst_buf++ = *src_buf++) == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*dst_buf = '\0';
		while (*src_buf++)
			;
	}
	return (src_buf - src - 1);
}
