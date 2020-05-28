/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:18:37 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/27 16:37:51 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_lst;
	t_list *tmp;
	t_list *add;

	if (lst)
	{
		tmp = lst;
		if ((new_lst = ft_lstnew(f(tmp->content))) == NULL)
			return (NULL);
		tmp = tmp->next;
		add = new_lst;
		while (tmp)
		{
			if ((add->next = ft_lstnew(f(tmp->content))) == NULL)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			add = add->next;
			tmp = tmp->next;
		}
		return (new_lst);
	}
	return (NULL);
}
