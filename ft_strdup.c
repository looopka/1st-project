/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:34:56 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/23 15:58:48 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *s_dup;

	if ((s_dup = ft_calloc(ft_strlen(s) + 1, sizeof(char))) == NULL)
		return (NULL);
	ft_strlcpy(s_dup, s, ft_strlen(s) + 1);
	return (s_dup);
}
