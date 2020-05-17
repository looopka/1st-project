/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:06:32 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/17 16:21:20 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ptr;
	t_list *start;

	if (lst)
	{
		start = *lst;
		while (start)
		{
			ptr = start->next;
			ft_lstdelone(start, del);
			start = ptr;
		}
		*lst = NULL;
	}
}
