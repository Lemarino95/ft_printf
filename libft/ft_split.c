/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:01 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/09 12:17:01 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != c)
		{
			i++;
		}
	}
	return (words);
}

static int	wordlen(const char *s, char c)
{
	int		l;
	int		len;

	len = ft_strlen(s);
	l = 0;
	while (l < len && s[l] != c)
		l++;
	return (l);
}

static char	**freestr(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i[2];
	char	**r;

	i[0] = 0;
	i[1] = 0;
	r = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!r)
		return (NULL);
	while (s[i[0]] && count_words(s, c) != 0)
	{
		while (s[i[0]] == c)
			i[0]++;
		r[i[1]] = ft_substr(s, i[0], wordlen(&s[i[0]], c));
		if (!r[i[1]])
			return (freestr(r));
		i[1]++;
		i[0] += wordlen(&s[i[0]], c);
		while (s[i[0]] == c && s[i[0]] != '\0')
			i[0]++;
	}
	return (r);
}