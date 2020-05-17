/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 18:29:28 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 17:14:21 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		len;
	char	*s_buff;

	len = ft_strlen(s);
	s_buff = s + len + 1;
	while (*s_buff != *s)
	{
		if (*s_buff == (char)c)
			return ((char *)s_buff);
		s_buff--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
