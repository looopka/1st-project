/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 12:52:54 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/27 16:38:13 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void		*dest_buff;
	const void	*src_buff;

	dest_buff = dest;
	src_buff = src;
	while (n-- > 0)
	{
		*(unsigned char *)dest_buff = *(unsigned char *)src_buff;
		if (*(unsigned char *)src_buff == (unsigned char)c)
		{
			dest_buff = dest_buff + 1;
			return (dest_buff);
		}
		dest_buff = dest_buff + 1;
		src_buff = src_buff + 1;
	}
	return (NULL);
}
