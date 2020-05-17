/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 17:00:57 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 16:13:49 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s_res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s_res = calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (s_res == NULL)
		return (NULL);
	ft_strlcat(s_res, s1, ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strlcat(s_res, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return (s_res);
}
