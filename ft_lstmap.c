/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoskim <hoskim@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:18:46 by hoskim            #+#    #+#             */
/*   Updated: 2024/10/08 10:50:40 by hoskim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*t;

	if (lst == 0 || f || 0)
		return (NULL);
	result = ft_lstnew((*f)(lst->content));
	if (!(result))
		return (NULL);
	t = result;
	lst = lst->next;
	while (lst)
	{
		t->next = ft_lstnew((*f)(lst->content));
		if (!(t->next))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		t = t->next;
		lst = lst->next;
	}
	return (result);
}
