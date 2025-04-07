/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:10:04 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/16 13:10:12 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	if (count != 0 && (SIZE_MAX / count) < size)
		return (NULL);
	c = malloc(size * count);
	if (!c)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}
/*
#include <limits.h>
int main()
{
	void *ptr;
	ptr = calloc(INT_MIN,INT_MIN);
	if (ptr == NULL)
		printf("here");
	if(ft_calloc(INT_MIN,INT_MIN)== NULL)
		printf("HERE");
	system("leaks a.out");
	return 0;
}
*/
