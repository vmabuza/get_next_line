/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 15:41:39 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/18 16:41:32 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*tab;

	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	tab = (char *)ft_memalloc(len + 1);
	if (!tab)
		return (NULL);
	else
		tab = ft_strcpy(tab, s1);
	tab = ft_strcat(tab, s2);
	return (tab);
}
