/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:30:17 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/13 13:38:22 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)ft_memalloc((ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	else
		while (s[i])
		{
			str[i] = f(s[i]);
			i++;
		}
	str[i] = '\0';
	return (str);
}
