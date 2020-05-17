/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 18:55:49 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 16:27:35 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *)big);
	while (*big && len-- > ft_strlen(little))
	{
		if (ft_memcmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
