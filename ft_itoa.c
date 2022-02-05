/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnam <gnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 00:55:10 by gnam              #+#    #+#             */
/*   Updated: 2022/01/13 23:08:57 by gnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	ft_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		minus;
	char	*c;

	if (n < 0)
		minus = -1;
	else
		minus = 1;
	len = ft_len(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (!c)
		return (0);
	c[len--] = '\0';
	while (len >= 0)
	{
		c[len] = '0' + ft_numlen(n % 10);
		n = ft_numlen(n / 10);
		len--;
	}
	if (minus == -1)
		c[0] = '-';
	return (c);
}
