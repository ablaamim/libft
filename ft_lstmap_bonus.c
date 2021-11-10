/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 08:36:33 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 19:19:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap_bonus(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *add;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew_bonus(f(lst->content));
	lst = lst->next;
	while ((lst))
	{
		if (!(add = ft_lstnew_bonus(f(lst->content))))
		{
			ft_lstclear_bonus(&new, del);
			return (NULL);
		}
		ft_lstadd_back_bonus(&new, add);
		lst = lst->next;
	}
	return (new);
}
