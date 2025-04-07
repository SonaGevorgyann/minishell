/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:19:45 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/17 21:17:03 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!new)
		return ;
	if (!*lst && new)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
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
	t_list *node3;
	
	int a = 9;
	int b = 10;
	int c = 8;

	node0 = ft_lstnew(&a);
	node1 = ft_lstnew(&b);
	node2 = ft_lstnew(&c);
	node3 = ft_lstnew(&c);

	head = &node0;
	ft_lstadd_front(head,node1);
	ft_lstadd_front(head,node2);

	printList(*head);
	ft_lstadd_back(head, node3);
	printList(*head);
	return 0;
}
*/