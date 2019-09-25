/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:17:59 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/24 16:47:39 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int					i;
	unsigned char		*csrc;
	unsigned char		*cdest;

	i = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dst;
	while (n > 0)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
