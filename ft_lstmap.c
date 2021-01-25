/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 23:01:08 by bzalugas          #+#    #+#             */
/*   Updated: 2021/01/25 12:43:25 by bzalugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*cel;

	first = NULL;
	if (f && del)
	{
		while (lst)
		{
			if (!(cel = ft_lstnew((*f)(lst->content))))
			{
				ft_lstclear(&first, del);
				return (NULL);
			}
			ft_lstadd_back(&first, cel);
			lst = lst->next;
		}
	}
	return (first);
}
