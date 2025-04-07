/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <aarustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:32:47 by aarustam          #+#    #+#             */
/*   Updated: 2025/02/17 22:32:50 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digcount(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_assign_char(int dig, char *p, char *str, int i)
{
	p[i - 1] = str[dig];
}

char	*checkzero(char *p, size_t dc)
{
	if (!p)
		return (NULL);
	p[0] = '0';
	p[dc] = '\0';
	return (p);
}

char	*ft_itoa(int num)
{
	char		*p;
	size_t		dc;
	size_t		dig;
	long long	n;

	n = num;
	dc = ft_digcount(n);
	p = (char *)malloc(dc + 1);
	if (num == 0 || !p)
		return (checkzero(p, dc));
	p[dc] = '\0';
	if (n < 0)
	{
		p[0] = '-';
		n = n * (-1);
	}
	while (n && dc > 0)
	{
		dig = n % 10;
		ft_assign_char(dig, p, "0123456789", dc);
		n /= 10;
		dc--;
	}
	return (p);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_itoa(-0));
// 	//printf("%lu\n", ft_digcount(789));
// }
