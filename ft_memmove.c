/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:53:34 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/23 15:07:19 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void		*dst_buff;
	const void	*src_buff;

	if (!n || src == dest)
		return (dest);
	if (dest > src)
	{
		dst_buff = dest + n;
		src_buff = src + n;
		while (n-- > 0)
		{
			*(unsigned char *)--dst_buff = *(unsigned char *)--src_buff;
		}
	}
	else
		ft_memcpy(dest,src,n);
	return (dest);
}
