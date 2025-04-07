/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:04:57 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/17 22:33:05 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head != NULL)
	{
		del(head->content);
		head = head->next;
	}
	while (*lst != NULL)
	{
		head = (*lst)->next;
		free(*lst);
		*lst = head;
	}
}
