/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:17:49 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/23 14:47:47 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void		*dst_buff;
	const void	*src_buff;

	dst_buff = dst;
	src_buff = src;
	if (!n || dst == src)
		return (dst);
	while (n-- > 0)
	{
		*(unsigned char *)dst_buff = *(unsigned char*)src_buff;
		dst_buff = dst_buff + 1;
		src_buff = src_buff + 1;
	}
	return (dst);
}
