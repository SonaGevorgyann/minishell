/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:33:02 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/16 13:33:06 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main() {
    const char *str = "hello world";
    int ch = 'w';

    char *result = ft_strrchr(str, ch);

    if (result != NULL) {
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}*/
