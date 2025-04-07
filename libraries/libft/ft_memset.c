/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 23:39:10 by aarustam          #+#    #+#             */
/*   Updated: 2024/01/28 17:22:51 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}
/*
#include <stdio.h>
int main()
{
	void * b;
	const unsigned int n = 10;
	char a[n];
	b = (void *)a;
	ft_memset(b, 'c', n);
    printf("%s", b);	
}*/
