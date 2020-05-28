/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 13:57:23 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/27 16:40:26 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	if (dest_len >= size)
		return (src_len + size);
	if (src_len < size - dest_len)
	{
		ft_strlcpy(dst + dest_len, src, src_len + 1);
	}
	else
	{
		ft_strlcpy(dst + dest_len, src, size - dest_len);
	}
	return (src_len + dest_len);
}
