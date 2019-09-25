/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:44:19 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/24 15:01:31 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	if ((unsigned char)s1[i] == (unsigned char)s2[i])
		return (0);
	if ((unsigned char)s1[i] < (unsigned char)s2[i])
		return (-1);
	else
		return (1);
}
