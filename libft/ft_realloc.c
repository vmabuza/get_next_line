/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 02:18:45 by vmabuza           #+#    #+#             */
/*   Updated: 2019/08/24 02:18:55 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_realloc(char *ptr, size_t n)
{
	char	*new;

	new = (char*)malloc(n);
	ft_bzero(new, n);
	ft_memcpy(new, ptr, ft_strlen(ptr) + 1);
	free(ptr);
	return (new);
}
