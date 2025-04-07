/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:32:42 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/16 13:32:47 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	if (!haystack && len == 0)
		return (NULL);
	if (*needle == '\0' || needle == NULL)
		return ((char *) haystack);
	n_len = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= n_len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, n_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
