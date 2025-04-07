/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:29:35 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/17 19:59:23 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
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
	printf("THE SIZE IS: %d", ft_lstsize(*head));
	return 0;
}
*/