/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:17:45 by lemarino          #+#    #+#             */
/*   Updated: 2024/12/09 12:17:46 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*src;
	char	*sub;

	i = 0;
	src = (char *)s;
	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	if ((start + len) < (ft_strlen(s)))
		size = (len + 1);
	else
		size = (ft_strlen(s) - start + 1);
	sub = (char *)malloc(sizeof (char) * size);
	if (!(sub))
		return (NULL);
	while (src[start] && i < size - 1)
	{
		sub[i] = src[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
