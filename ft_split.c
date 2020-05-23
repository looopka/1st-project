/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:39:01 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/23 14:40:13 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlenc(char const *str, char end)
{
	int len;

	len = 0;
	while (*str && *str != end)
	{
		len++;
		str++;
	}
	return (len);
}

static int	ft_cnt_word(char const *str, char delim)
{
	int cnt;

	cnt = 0;
	while (*str)
	{
		if (*str != delim)
		{
			cnt++;
			while (*str && *str != delim)
				str++;
		}
		else
			str++;
	}
	return (cnt);
}

static char	*ft_allocation(char const *str, char delim)
{
	char *word;

	word = ft_substr(str, 0, ft_strlenc(str, delim));
	return (word);
}

static char	**free_list(char **list, int cnt)
{
	int i;

	i = 0;
	while (i < cnt)
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char	**list;
	int		cnter;

	if (s == NULL)
		return (NULL);
	list = NULL;
	cnter = 0;
	list = (char **)malloc((ft_cnt_word(s, c) + 1) * sizeof(char *));
	if (list == NULL)
		return (list);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if ((list[cnter] = ft_allocation(s, c)) == NULL)
				return (free_list(list, cnter));
			cnter++;
			while (*s && *s != c)
				s++;
		}
	}
	list[cnter] = NULL;
	return (list);
}
