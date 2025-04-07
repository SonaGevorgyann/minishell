/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:45:22 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/18 10:41:10 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new;
	t_list	*original_head;

	if (!lst || !del || !f)
		return (NULL);
	original_head = lst;
	new_head = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
			ft_lstclear(&original_head, (*del));
		ft_lstadd_back(&new_head, new);
		lst = lst->next;
	}
	return (new_head);
}
