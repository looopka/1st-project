/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:53:34 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/03 16:35:57 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char buff[n];

	ft_memcpy(buff, src, n);
	ft_memcpy(dest, buff, n);
	return (dest);
}