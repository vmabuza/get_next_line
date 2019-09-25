/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 17:41:52 by vmabuza           #+#    #+#             */
/*   Updated: 2019/07/05 12:36:27 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_substring(int fd, char *file[], char **line, int el)
{
	t_line	magic;

	magic.l_len = (unsigned int)ft_strlen(*line);
	magic.f_len = (size_t)ft_strlen(file[fd]);
	magic.len = (int)ft_strlen(*line);
	magic.sbstr = ft_strsub(file[fd], magic.l_len + el,\
	magic.f_len - magic.len + el);
	return (magic.sbstr);
}

int		get_next_line(const int fd, char **line)
{
	static char		*file[MAX_FD];
	t_line			magic;

	if (fd < 0 || (!file[fd] && !(file[fd] = ft_strnew(1))) || !line)
		return (-1);
	while ((!ft_strchr(file[fd], '\n') && \
	(magic.ret = read(fd, magic.buf, BUFF_SIZE)) > 0))
	{
		magic.buf[magic.ret] = '\0';
		magic.temp = file[fd];
		file[fd] = ft_strjoin(file[fd], magic.buf);
		ft_strdel(&magic.temp);
	}
	if (magic.ret == -1 || !*(magic.temp = file[fd]))
		return (magic.ret == -1 ? -1 : 0);
	if ((magic.el = (ft_strchr(file[fd], '\n') > 0)))
		*line = ft_strsub(file[fd], 0, ft_strchr(file[fd], '\n') - file[fd]);
	else
		*line = ft_strdup(file[fd]);
	file[fd] = (char*)ft_substring(fd, file, line, magic.el);
	ft_strdel(&magic.temp);
	return (!(!file[fd] && !ft_strlen(*line)));
}
