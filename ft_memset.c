/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 12:14:48 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/27 16:38:38 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void *ptr;

	ptr = s;
	while (n-- > 0)
	{
		*(unsigned char *)ptr = (unsigned char)c;
		ptr = ptr + 1;
	}
	return (s);
}
