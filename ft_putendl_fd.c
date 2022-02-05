/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnam <gnam@42seoul.kr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:35:47 by gnam              #+#    #+#             */
/*   Updated: 2021/11/24 16:42:58 by gnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write (fd, s++, 1);
		write (fd, "\n", 1);
	}
}
