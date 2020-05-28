/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 16:50:25 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/27 16:41:15 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *s_res;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	if ((s_res = (char *)ft_calloc(len + 1, sizeof(char))) == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	ft_strlcpy(s_res, s + start, len + 1);
	return (s_res);
}
