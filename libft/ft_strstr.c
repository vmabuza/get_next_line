/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:31:30 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/24 15:54:33 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int a;
	int b;

	a = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b] == haystack[a + b])
		{
			if (needle[b + 1] == '\0')
			{
				return ((char *)haystack + a);
			}
			b++;
		}
		a++;
	}
	return (0);
}
