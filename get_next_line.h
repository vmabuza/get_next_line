/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 00:16:08 by vmabuza           #+#    #+#             */
/*   Updated: 2019/07/05 18:23:52 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/libft.h"
# define BUFF_SIZE 32
# define MAX_FD 2147483647

typedef	struct		s_line
{
	unsigned int	l_len;
	size_t			f_len;
	int				len;
	char			*sbstr;
	char			buf[BUFF_SIZE + 1];
	char			*temp;
	int				ret;
	int				el;
}					t_line;

int					get_next_line(const int fd, char **line);

#endif
