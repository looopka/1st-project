/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:23:48 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 16:11:49 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *ptr;

	if ((ptr = malloc(num * size)) == NULL)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
