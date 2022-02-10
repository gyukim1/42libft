/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnam <gnam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 00:21:45 by gnam              #+#    #+#             */
/*   Updated: 2022/02/09 00:27:04 by gnam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_cntword(const char *str, char c)
{
	size_t	cnt;
	size_t	flag;

	cnt = 0;
	flag = 0;
	while (*str != '\0')
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			cnt++;
		}
		else if (*str == c)
			flag = 0;
        str++;
	}
	return (cnt);
}

static size_t ft_wordlen(char const *s, char c)
{
	size_t len;

	len = 0;
	while (*s != '\0' && *s != c)
    {
		len++;
        s++;
    }
	return (len);
}

static char *ft_strndup(const char *s, size_t num)
{
	char	*word;
    char    *temp;

	if (!(word = (char *)malloc(sizeof(char) * (num + 1))))
		return (0);
    temp = word;
	while (num-- > 0)
        *temp++ = *s++;
	*temp = '\0';
	return (word);
}

static void ft_free_str(char **s, int i)
{
	while (i--)
    {
		free(s[i]);
        s[i] = NULL;
    }
	free(s);
    s = NULL;
}

char **ft_split(char const *s, char c)
{
	size_t	nb;
	size_t	wordlen;
	size_t	cnt;
	char	**result;

    if (s == NULL)
		return (0);
	cnt = ft_cntword(s, c); 
	if (!(result = (char **)malloc(sizeof(char *) * (cnt + 1))))
		return (0);
	nb = 0;
	while (nb < cnt)
	{
		while (*s != '\0' && *s == c) 
			s++;
		wordlen = ft_wordlen(s, c); 
		if (!(result[nb] = ft_strndup(s, wordlen))) 
		{
			ft_free_str(result, nb - 1); 
			return (0);
		}
		s += wordlen;
		nb++;
	}
	result[cnt] = NULL;
	return (result);
}
