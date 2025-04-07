/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expanders_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <aarustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:07:28 by aarustam          #+#    #+#             */
/*   Updated: 2025/02/17 21:07:30 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	question_mark(char **tmp)
{
	free(*tmp);
	*tmp = ft_itoa(g_global.error_num);
	return (ft_strlen(*tmp) + 1);
}
