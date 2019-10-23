/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 18:13:01 by sadawi            #+#    #+#             */
/*   Updated: 2019/10/23 18:38:51 by sadawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *new;

	while (lst)
	{
		ft_lstadd(&tmp, ft_lstnew(((*f)(lst))->content,
			((*f)(lst))->content_size));
		lst = lst->next;
	}
	while (tmp)
	{
		ft_lstadd(&new, ft_lstnew(((*f)(tmp))->content,
			((*f)(tmp))->content_size));
		tmp = tmp->next;
	}
	return (new);
}
