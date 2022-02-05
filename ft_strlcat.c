/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnam <gnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:14:13 by gnam              #+#    #+#             */
/*   Updated: 2021/12/20 14:55:07 by gnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	j = d;
	i = 0;
	if (d < size - 1 && size > 0)
	{
		while (src[i] && d + i < size - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (d >= size)
		return (size + s);
	return (d + s);
}
