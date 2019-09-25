/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:47:32 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/24 15:18:10 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s, const char *t, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s[i] != '\0' && t[i] != '\0' && s[i] == t[i] && i < (n - 1))
	{
		i++;
	}
	if ((unsigned char)s[i] - (unsigned char)t[i] > 0)
		return (1);
	else if ((unsigned char)s[i] - (unsigned char)t[i] < 0)
		return (-1);
	else
		return (0);
}
