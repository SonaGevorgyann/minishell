/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_disc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <aarustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:17:42 by aarustam          #+#    #+#             */
/*   Updated: 2025/02/17 22:11:20 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	unsigned int	len;

	len = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str && *str)
	{
		write (1, str, 1);
		len++;
		str++;
	}
	return (len);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
		write (1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

int	print_decim(int n)
{
	int	len;

	ft_putnbr(n);
	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}
/*
int	main ()
{
	int a;

	a = print_decim(INT_MIN);
	printf("%c",'\n');
	printf("%d\n", a);
}*/
