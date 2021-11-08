/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 08:33:30 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/08 19:04:54 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		(*del)(temp->content);
		free(temp);
	}
}
