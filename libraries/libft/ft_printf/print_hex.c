/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <aarustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 21:18:56 by aarustam          #+#    #+#             */
/*   Updated: 2025/02/17 22:11:29 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	print_lower_hex(unsigned int p)
{
	int	len;

	len = 0;
	print_ptr_hex(p, "0123456789abcdef");
	if (p == 0)
		return (1);
	while (p)
	{
		p /= 16;
		len++;
	}
	return (len);
}

int	print_upper_hex(unsigned int p)
{
	int	len;

	len = 0;
	print_ptr_hex(p, "0123456789ABCDEF");
	if (p == 0)
		return (1);
	while (p)
	{
		p /= 16;
		len++;
	}
	return (len);
}
