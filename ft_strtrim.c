/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 17:10:10 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 16:29:55 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s_res;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strrchr((char *)set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strrchr((char*)set, s1[end]))
		end--;
	s_res = ft_substr(s1, 0, end + 1);
	return (s_res);
}
