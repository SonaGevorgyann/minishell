/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:16:29 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/16 22:08:10 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*current;

	current = (t_list *)malloc(sizeof(t_list));
	if (!current)
		return (0);
	current->content = content;
	current->next = NULL;
	return (current);
}
/*
int main() {
    t_list *p;
    int a = 9;
    p = ft_lstnew(&a);
    printf("%d\n", *(int *)(p->content));
	return 0;
}*/
