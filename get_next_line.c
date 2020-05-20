/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmeda <gmeda@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 17:53:18 by gmeda             #+#    #+#             */
/*   Updated: 2019/10/08 19:31:52 by gmeda            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char					*move_ptr(char *s, char *l, unsigned int x)
{
	int					start;
	int					len;

	start = (size_t)ft_strlen(l) + x;
	len = (size_t)ft_strlen(s);
	s = ft_strsub(s, start, len);
	return (s);
}

int						get_next_line(const int fd, char **line)
{
	static char			*file[2147483648];
	char				buff[BUFF_SIZE + 1];
	char				*to_free;
	ssize_t				b;
	int					sch;

	if (fd < 0 || (!file[fd] && !(file[fd] = ft_strnew(1))) || !line)
		return (-1);
	while (!ft_strchr(file[fd], '\n') && (b = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[b] = '\0';
		to_free = file[fd];
		file[fd] = ft_strjoin(file[fd], buff);
		ft_strdel(&to_free);
	}
	if ((b == -1 || !*(to_free = file[fd])))
		return (b == -1 ? -1 : 0);
	if ((sch = (ft_strchr(file[fd], '\n') > 0)))
		*line = ft_strsub(file[fd], 0, ft_strchr(file[fd], '\n') - file[fd]);
	else
		*line = ft_strdup(file[fd]);
	file[fd] = move_ptr(file[fd], *line, sch);
	ft_strdel(&to_free);
	return ((!file[fd] && !ft_strlen(*line)) ? 0 : 1);
}
