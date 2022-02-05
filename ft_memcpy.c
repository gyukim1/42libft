/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnam <gnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 01:41:36 by gnam              #+#    #+#             */
/*   Updated: 2021/12/21 17:31:21 by gnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const void	*dest;

	dest = dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*((unsigned char *)dest++) = *((unsigned char *)src++);
	return (dst);
}
