/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:57:42 by ccumming          #+#    #+#             */
/*   Updated: 2018/12/01 19:01:33 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_freelst(t_list *list)
{
	while (list->next)
	{
		ft_freelst(list->next);
	}
	free(list);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*list;

	if (!f)
		return (lst);
	new = NULL;
	if (lst)
	{
		list = f(lst);
		new = list;
		while (lst->next)
		{
			lst = lst->next;
			if (!(list->next = f(lst)))
			{
				ft_freelst(list);
				return (NULL);
			}
			list = list->next;
		}
	}
	return (new);
}
