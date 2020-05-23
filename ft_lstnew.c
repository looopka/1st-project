/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanesha <dtanesha@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 13:08:33 by dtanesha          #+#    #+#             */
/*   Updated: 2020/05/23 14:40:19 by dtanesha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new_content;

	if ((new_content = (t_list *)malloc(sizeof(*new_content))) == NULL)
		return (NULL);
	new_content->content = content;
	new_content->next = NULL;
	return (new_content);
}
