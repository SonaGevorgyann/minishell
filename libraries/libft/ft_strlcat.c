/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:30:05 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/16 13:30:13 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	if (!dst && size == 0)
		return (ft_strlen(src));
	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

// #include <stdio.h>
// int main() {
// 	{
// 		char dest[30] = {0};
// 		assert(ft_strlcat(dest, "123", 0) == 3);
// 	}
// 	{
// 		char dest[30] = {0};
// 		assert(strlcat(dest, "123", 0) == 3);
// 	}
// }
