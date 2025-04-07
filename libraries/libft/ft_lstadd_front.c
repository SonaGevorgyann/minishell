/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:58:59 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/18 11:17:39 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
void printList(t_list* node)
{
    while (node != NULL) {
        printf(" %d", *(int *)(node->content));
        node = node->next;
		
    }
    printf("\n");
}

int main()
{
	t_list **head = NULL;
	t_list *node0;
	t_list *node1;
	t_list *node2;
	
	int a = 9;
	int b = 10;
	int c = 8;

	node0 = ft_lstnew(&a);
	node1 = ft_lstnew(&b);
	node2 = ft_lstnew(&c);

	head = &node0;
	ft_lstadd_front(head,node1);
	ft_lstadd_front(head,node2);

	printList(*head);
	return 0;
}
*/
