/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <aarustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:04:56 by aarustam          #+#    #+#             */
/*   Updated: 2025/02/17 21:04:58 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*join_split_str(char **split_str, char *new_str)
{
	char	*tmp;
	char	*add_space;
	int		i;

	tmp = ft_strdup(split_str[0]);
	i = 1;
	while (split_str[i])
	{
		new_str = tmp;
		add_space = ft_strjoin(new_str, " ");
		free(new_str);
		tmp = ft_strjoin(add_space, split_str[i]);
		free(add_space);
		i++;
	}
	new_str = tmp;
	return (new_str);
}

char	**resplit_str(char **double_arr)
{
	char	**ret;
	char	*joined_str;

	joined_str = join_split_str(double_arr, NULL);
	free_arr(double_arr);
	ret = ft_split(joined_str, ' ');
	free(joined_str);
	joined_str = join_split_str(ret, NULL);
	free_arr(ret);
	ret = ft_split(joined_str, ' ');
	free(joined_str);
	return (ret);
}
