/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:52:08 by vmabuza           #+#    #+#             */
/*   Updated: 2019/06/13 13:40:29 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			str[i] = f(i, s[i]);
			i++;
		}
	str[i] = '\0';
	return (str);
}
