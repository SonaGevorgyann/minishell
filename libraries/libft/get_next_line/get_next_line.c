/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam <aarustam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:04:24 by aarustam          #+#    #+#             */
/*   Updated: 2025/02/17 22:12:12 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*read_to_line_reminder(int fd, char *line_reminder)
{
	char	*buff;
	int		read_bytes;

	buff = (char *)malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(line_reminder, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			free(line_reminder);
			buff = 0;
			return (NULL);
		}
		buff[read_bytes] = '\0';
		line_reminder = ft_strjoin1(line_reminder, buff);
	}
	free (buff);
	return (line_reminder);
}

char	*get_line_(char *line_reminder)
{
	int		i;
	char	*line;

	i = 0;
	if (!line_reminder || line_reminder[0] == '\0')
		return (NULL);
	while (line_reminder[i] && line_reminder[i] != '\n')
		i++;
	line = (char *)malloc(i + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (line_reminder[i] && line_reminder[i] != '\n')
	{
		line[i] = line_reminder[i];
		i++;
	}
	if (line_reminder[i] == '\n')
	{
		line[i] = line_reminder[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*new_line_reminder(char *line_reminder)
{
	int		i;
	int		j;
	char	*new_line_reminder;

	i = 0;
	while (line_reminder[i] && line_reminder[i] != '\n')
		i++;
	if (!line_reminder[i])
	{
		free(line_reminder);
		return (NULL);
	}
	new_line_reminder = (char *)malloc(ft_strlen(line_reminder) - i + 1);
	if (!new_line_reminder)
		return (NULL);
	j = 0;
	i++;
	while (line_reminder[i])
		new_line_reminder[j++] = line_reminder[i++];
	new_line_reminder[j] = '\0';
	free (line_reminder);
	return (new_line_reminder);
}

char	*get_next_line(int fd)
{
	static char	*line_reminder;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		free(line_reminder);
		line_reminder = NULL;
		return (NULL);
	}
	line_reminder = read_to_line_reminder(fd, line_reminder);
	if (!line_reminder || line_reminder[0] == '\0')
	{
		free(line_reminder);
		line_reminder = 0;
		return (NULL);
	}
	line = get_line_(line_reminder);
	line_reminder = new_line_reminder(line_reminder);
	return (line);
}

// int	main(void)
// {
// 	char	*line;
// 	int		i;
// 	int		fd;
// 	fd = open("cool.txt", O_RDONLY);

// 	i = 0;
// 	while (i < 2)
// 	{
// 		line = get_next_line(fd);
// 		printf("line=%s", line);
// 		free(line);
// 		i++;
// 	}
// 	close(fd);
// 	//system("leaks a.out");

// 	return (0);
// }
