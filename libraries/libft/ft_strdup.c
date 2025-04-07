/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 13:28:51 by aarustam          #+#    #+#             */
/*   Updated: 2024/02/16 13:28:52 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (!cpy)
	{
		return (0);
	}
	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    const char *original = NULL;
    char *duplicate = strdup(original);

	if (duplicate == NULL)
		printf("Memory allocation failed.\n");
	else{
		printf("Original: %s\n", original);
		printf("Duplicate: %s\n", duplicate);
		free(duplicate);
	}
    return 0;
}*/
