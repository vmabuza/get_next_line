/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:28:55 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/24 16:16:50 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char		c_copy;
	unsigned char		*s_copy;
	int					i;

	i = 0;
	c_copy = (unsigned char)c;
	s_copy = (unsigned char *)src;
	while (n--)
	{
		if (s_copy[i] == c_copy)
			return (s_copy + i);
		i++;
	}
	return (NULL);
}
