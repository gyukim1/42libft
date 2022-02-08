/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnam <gnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 01:06:27 by gnam              #+#    #+#             */
/*   Updated: 2022/02/09 00:13:49 by gnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = ft_strlen(s);
	while (i)
	{
		if (s1[i] == (char)c)
			return (s1 + i);
		i--;
	}
	if (s1[i] == (char)c)
		return (s1);
	return (0);
}
