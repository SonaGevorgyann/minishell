/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:19:54 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/16 13:19:58 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	if (!dst && !src)
		return (NULL);
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main() {
    char source[13];
    char destination[20];

    ft_memcpy(destination, source, sizeof(source) + 1);
    
	printf("Source: %s\n", source);
    printf("Destination: %s", destination);

    return 0;
}*/
