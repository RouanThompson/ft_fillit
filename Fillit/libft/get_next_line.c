/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothomps <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 13:25:39 by rothomps          #+#    #+#             */
/*   Updated: 2019/04/14 18:13:10 by rothomps         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		retrive(int fd, char **str, char **line, int bytes_read)
{
	int		i;
	char	*tmp;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		tmp = ft_strdup(str[fd] + i + 1);
		if (str[fd])
			free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		if (bytes_read == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup((str[fd]));
		ft_strdel(&str[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int				bytes_read;
	char			*tmp_h;
	char			buff[BUFF_SIZE + 1];
	static char		*str[MAX_FD];

	if (fd < 0 || line == NULL || fd > MAX_FD)
		return (ERROR);
	if (!str[fd])
		str[fd] = ft_strnew(1);
	while ((bytes_read = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[bytes_read] = '\0';
		tmp_h = ft_strjoin(str[fd], buff);
		if (str[fd])
			free(str[fd]);
		str[fd] = tmp_h;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (bytes_read < 0)
		return (ERROR);
	if (bytes_read == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (retrive(fd, str, line, bytes_read));
}
