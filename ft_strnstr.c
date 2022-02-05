/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnam <gnam@42seoul.kr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:04:38 by gnam              #+#    #+#             */
/*   Updated: 2022/02/05 11:21:31 by gnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *c, size_t len)
{
	size_t	i;

	i = 0;
	if (!s || !c)
		return ((char *)s);
	if (ft_strlen(c) > len)
		return (NULL);
	while (i < len)
	{
		if (ft_strncmp((char *)&s[i], c, ft_strlen(c)) == 0)
		{
			if (i + ft_strlen(c) > len)
				return (NULL);
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
