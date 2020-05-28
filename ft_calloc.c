/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:23:48 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/28 20:41:43 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	i;

	i = -1;
	if (size != 0 && (num > i / size))
		return (NULL);
	if ((ptr = malloc(num * size)) == NULL)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
