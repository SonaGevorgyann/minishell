/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:36:01 by aarustam          #+#    #+#             */
/*   Updated: 2024/01/28 18:06:29 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
		*p++ = 0;
}
/*
#include <stdio.h>
int main()
{
	char a[10] = {'1','2','3','4','5','6','7','8','9','p'};
    int value = 42;
    ft_bzero(&value, sizeof(int));
	ft_bzero(a, sizeof(a));

    printf(" %d\n", value);
	for (int i = 0; i < sizeof(a); ++i)
        printf(" %d ", a[i]);

    return 0;
}*/
