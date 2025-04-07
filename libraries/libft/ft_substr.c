/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:34:02 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/16 13:34:04 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		p = (char *)malloc(ft_strlen(s) - start + 1);
	else
		p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i])
	{
		p[j] = s[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}

// int main(void)
// {
// 	return (0);
// }
