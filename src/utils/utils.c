/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <aarustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:11:55 by aarustam          #+#    #+#             */
/*   Updated: 2025/02/19 00:56:14 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	find_matching_quote(char *line, int i, int *num_del, int del)
{
	int	j;

	j = i + 1;
	*num_del += 1;
	while (line[j] && line[j] != del)
		j++;
	if (line[j] == del)
		*num_del += 1;
	return (j - i);
}

int	first_occurance_matches_last_occurance(char *line)
{
	int	i;
	int	first;
	int	last;

	i = 0;
	first = 0;
	last = 0;
	while (line[i])
	{
		if (line[i] == 34 || line[i] == 39)
		{
			first = line[i];
			break ;
		}
		i++;
	}
	while (line[i])
	{
		if (line[i] == 34 || line[i] == 39)
			last = line[i];
		i++;
	}
	if (first == last)
		return (1);
	return (0);
}

int	check_even_or_odd(char *line)
{
	int	i;
	int	sona;

	i = -1;
	sona = 0;
	while (line[++i])
	{
		if (line[i] && (line[i] == 34 || line[i] == 39))
			sona++;
	}
	return (sona % 2);
}

int	count_quotes(char *line)
{
	int	i;
	int	s;
	int	d;

	s = 0;
	d = 0;
	i = -1;
	while (line[++i])
	{
		if (line[i] == 34)
			i += find_matching_quote(line, i, &d, 34);
		if (line[i] == 39)
			i += find_matching_quote(line, i, &s, 39);
	}
	if ((d > 0 && d % 2 != 0) || (s > 0 && s % 2 != 0)
		|| check_even_or_odd(line) == 1
		|| first_occurance_matches_last_occurance(line) == 0)
		return (0);
	return (1);
}

char	**ft_arrdup(char **arr)
{
	char	**rtn;
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
		i++;
	rtn = ft_calloc(sizeof(char *), i + 1);
	if (!rtn)
		return (NULL);
	i = 0;
	while (arr[i] != NULL)
	{
		rtn[i] = ft_strdup(arr[i]);
		if (rtn[i] == NULL)
		{
			free_arr(rtn);
			return (rtn);
		}
		i++;
	}
	return (rtn);
}
