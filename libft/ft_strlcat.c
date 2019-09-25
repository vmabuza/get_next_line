/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:10:37 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/24 16:02:20 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	while (*(dest + a) && a < size)
		a++;
	while (*(src + b) && (a + b + 1) < size)
	{
		*(dest + a + b) = *(src + b);
		b++;
	}
	if (a < size)
		*(dest + a + b) = '\0';
	return (a + ft_strlen(src));
}
